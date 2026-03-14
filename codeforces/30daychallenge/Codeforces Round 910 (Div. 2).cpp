#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n,k;cin>>n>>k;
string s;cin>>s;
if(count(s.begin(),s.end(),'B')==k){
    cout<<0<<"\n";return;
}
int x=count(s.begin(),s.end(),'B');
int a=0,b=0;
for(int i=0;i<n;i++){
    a+=(s[i]=='A');
    b+=(s[i]=='B');

    if((k-x)==a){
        cout<<1<<"\n"<<i+1<<" B\n";break;
    }
    if((x-k)==b){
         cout<<1<<"\n"<<i+1<<" A\n";break;
    }
}

}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}
