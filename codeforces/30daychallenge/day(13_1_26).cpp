#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve() {
    // Your problem-solving code goes here
    // Example:
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++) cin >> arr[i];
    // ... your logic ...
    string s; cin>>s;
    int n=s.size();int cnt=1;
    for(int i=1;i<n;i++){

        if(s[i]=='0'){
            break;
        }
    cnt++;
    }
    int len=n-cnt;
    string sub = s.substr(0, len);
    cout<<sub<<endl;
}

int main() {
    // Optimization for faster I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Test case handling (uncomment the next line to enable)
    ll test ;cin>>test;
    // cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}

