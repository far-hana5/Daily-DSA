/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int c = 0;
        int f = -1, l = -1;

        // count existing students, find first & last '1'
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                c++;
                if (f == -1) f = i;
                l = i;
            }
        }

        int a = 0;

        // no students initially
        if (c == 0) {
            cout << (n + 2) / 3 << "\n";
            continue;
        }

        // left side
        a += (f+1) / 3;

        // right side
        int x=n-1-l;
        a += (x+1) /3;

        // middle segments
        int p = f;
        for (int i = f + 1; i <= l; i++) {
            if (s[i] == '1') {
                int g = i - p - 1;
                a += (g/3);
                p = i;
            }
        }

        cout << c + a << "\n";
    }

    return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    int x = 2e9; // Minimum value
    int y = -2e9; // Maximum value (Note: handwriting said 2e9, but y usually tracks max)

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < x) x = a[i];
        if (a[i] > y) y = a[i];
    }

    // Check if the array is already sorted
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    // If already sorted, the logic suggests returning -1 (or some indicator)
    if (sorted) {
        cout << "-1" << endl;
        return 0;
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    // Binary Search Logic
    long long l = 1, r = 1000000000;
    int ans_u = 1;

    while (l <= r) {
        long long m = l + (r - l) / 2;

        // Potential range boundaries derived from m
        long long u = (long long)y - m;
        long long v = (long long)x + m;

        bool possible = true;
        if (u < v) {
            for (int i = 0; i < n; i++) {
                // Check if elements outside the 'safe' range [u, v] match the sorted version
                if (a[i] > u && a[i] < v) {
                    if (a[i] != b[i]) {
                        possible = false;
                        break;
                    }
                }
            }
        }

        if (possible) {
            ans_u = m; // Storing the best m found
            r = m - 1; // Try to find a smaller m
        } else {
            l = m + 1;
        }
    }

    cout << ans_u << endl;

    return 0;
}


/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int k, int n, const vector<int>& a, const vector<int>& b, int min_val, int max_val) {
    for (int i = 0; i < n; i++) {

        bool can_swap_with_min = (a[i] - min_val >= k);
        bool can_swap_with_max = (max_val - a[i] >= k);

        if (!can_swap_with_min && !can_swap_with_max) {

            if (a[i] != b[i]) return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = 2e9, max_val = -2e9;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    if (a == b) {
        cout << -1 << endl;
        return;
    }

    int low = 1, high = 1e9, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, n, a, b, min_val, max_val)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

*/
