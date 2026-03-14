#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
vector<int> con;
    if (n > 0) {
        con.push_back(a[0]);
        for (int i=1; i<n;i++) {
            if (a[i]!=a[i-1]) {
                con.push_back(a[i]);
            }
        }
    }
    int p_idx = 0;
    int c_idx = 0;
    while (p_idx<n&&c_idx<con.size()) {
        if (p[p_idx] ==con[c_idx]) {
            c_idx++;
        }
        p_idx++;
    }

    if (c_idx==con.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
