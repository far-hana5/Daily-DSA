#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        map<ll,int> f;
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            f[a[i]]++;
            sum += a[i];
        }

        vector<pair<ll,int>> pai;
        for(auto &p : f) {
            pai.emplace_back(p.first, p.second);
        }
        sort(pai.rbegin(), pai.rend());

        vector<ll> odd;
        for(auto &p : pai) {
            if(p.second % 2 == 1) odd.push_back(p.first);
        }
        sort(odd.begin(), odd.end());
        int mm = odd.size();

        ll smallSum = 0;
        if(mm > 2) {
            for(int i = 0; i < mm - 2; i++) smallSum += odd[i];
        }

        ll curSum = sum;
        int curn = n;
        int idx = 0;
        ll ans = 0;

        while(true) {
            ll s = curSum - smallSum;
            ll m = (idx < pai.size() ? pai[idx].first : 0LL);
            int removed_num = (mm > 2 ? mm - 2 : 0);
            int remaining_k = curn - removed_num;

            if(remaining_k >= 3 && s > 2LL * m) {
                ans = s;
                break;
            }

            if(idx >= pai.size()) break;

            auto [length, count] = pai[idx];

            // Handle odd count
            if(count % 2 == 1) {
                if(mm > 3) smallSum -= odd[mm - 3];
                else smallSum = 0;
                odd.pop_back();
                mm--;
            }

            curSum -= length * count;
            curn -= count;
            idx++;
        }

        cout << ans << "\n";
    }

    return 0;
}
