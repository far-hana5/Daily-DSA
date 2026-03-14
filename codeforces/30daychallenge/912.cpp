#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

vector<ll>suf(n+1,0);
for(int i=n-1;i>=0;i--){
    suf[i]=suf[i+1]+arr[i];
}
ll ans=suf[0];
for(int i=1;i<n;i++){
    if(suf[i]>0){
        ans=ans+suf[i];
    }
}
cout<<ans<<"\n";
}
}
