
#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solve() {
    // Your core logic for each test case goes here
    int n; cin >> n;
    string arr; cin>>arr;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]=='0'){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}

int main() {
    // Input/Output optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int t;cin>>t;
while(t--){
    solve();
}
    return 0;
}


