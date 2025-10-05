#include <bits/stdc++.h>
using namespace std;

bool isSort(vector<int> &s, int n) {
    for (int i = 1; i < n; i++) {
        if (s[i] <= s[i - 1]) return false;
    }
    return true;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
         int n, m;
    cin >> n >> m;

    vector<int> s(m);
    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }


    int ans = n-s[m-1]+1;
    if (!isSort(s, m)) {
       cout<<1<<endl;
       continue;
    }
    cout << ans << "\n";
    }
}
