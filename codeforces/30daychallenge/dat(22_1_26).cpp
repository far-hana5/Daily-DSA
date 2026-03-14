#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solve() {
    // Your core logic for each test case goes here
    int n,x; cin >> n>>x; vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     sort(arr.begin(), arr.end());
    ll sum=0;
    ll p=0;vector<ll>ans;
    ll s=0;ll e=n-1;
    while(s<=e){
        ll need=x-(sum%x);
        if(arr[e]>=need){
                ans.push_back(arr[e]);
                p+=arr[e];
            sum+=arr[e];e--;

        }else{
             ans.push_back(arr[s]);
        sum+=arr[s];s++;
        }
    }
    cout<<p<<endl;
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


