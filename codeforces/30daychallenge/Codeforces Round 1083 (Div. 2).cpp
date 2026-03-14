#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;cin>>n;
int ans=1;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        while(n%i==0){
            n=n/i;
        }
        ans=ans*i;
    }
}
if(n!=1){
    ans=ans*n;
}
cout<<ans<<"\n";
}
int main(){
int t;cin>>t;

while(t--){
    solve();
}
}
