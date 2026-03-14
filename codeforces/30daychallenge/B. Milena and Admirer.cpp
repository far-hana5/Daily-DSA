#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;cin>>n;
vector<ll>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll prev=INT_MAX;ll ans=0;
for(int i=n-1;i>=0;i--){
    if(arr[i]<=prev){
        prev=arr[i];
    }else{
    ll slice=(arr[i]+prev-1)/prev;
    ans=ans+(slice-1);
    prev=arr[i]/slice;
    }
}
cout<<ans<<"\n";
}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}
