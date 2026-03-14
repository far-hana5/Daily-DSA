/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
int n;cin>>n;
string s;cin>>s;

if(n&1){
    if(s[0]=='b'){
        cout<<"NO\n";return;
    }
    for(int i=1;i<n-1;i=i+2){
        if((s[i]!=s[i+1]) || s[i]=='?' || s[i+1]=='?')continue;
        else{
            cout<<"NO\n";return;
        }
    }
}else{
    for(int i=0;i<n-1;i=i+2){
        if((s[i]!=s[i+1]) || s[i]=='?' || s[i+1]=='?')continue;
        else{
            cout<<"NO\n";return;
        }
    }
}
cout<<"YES\n";
}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
int n;cin>>n;
vector<int>arr(n+1);
for(int i=1;i<=n;i++){
    cin>>arr[i];
}

int ans=1,curr=arr[1];
for(int i=2;i<=n;i++){
    if(arr[i]==arr[i-1]+1 || arr[i]<=arr[i-1] && arr[i]>curr )continue;
    curr=arr[i];ans++;
}
cout<<ans<<"\n";
}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}


