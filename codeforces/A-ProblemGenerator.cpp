#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }

    int ans = 0;
    for (char c = 'A'; c <= 'G'; c++) {
        if (mp[c] < m) {
            ans += (m - mp[c]);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
