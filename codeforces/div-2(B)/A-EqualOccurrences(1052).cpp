#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxval = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxval = max(maxval, arr[i]);
        }

        // frequency array
        vector<int> f(maxval + 1, 0);
        for (int x : arr) f[x]++;

        // collect frequencies of distinct elements
        vector<int> freq;
        for (int i = 0; i <= maxval; i++) {
            if (f[i] > 0) freq.push_back(f[i]);
        }

        int ans = 0;
        int maxFreq = *max_element(freq.begin(), freq.end());

        // try each possible target occurrence x
        for (int x = 1; x <= maxFreq; x++) {
            int cnt = 0;
            for (int val : freq) {
                   // cout<<val<<"       :"<<endl;
                if (val >= x) cnt++;
            }
            ans = max(ans, cnt * x);
        }

        cout << ans << "\n";
    }
    return 0;
}
