#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k;cin>>n>>k;
if(n>k || k>2*n-1){
    cout<<"NO\n";return;
}else if(k==n){
cout<<"YES\n";
for(int i=1;i<=n;i++){
    cout<<i<<" "<<i<<" \n"[i==n];
}
return;
}else if(n==1){
cout<<"NO\n";return;
}
k=k-n;
vector<ll>ans={1,2};
k--;
queue<ll>unseen,seen;
seen.push(1);
seen.push(2);
for(int i=3;i<=n;i++){
    unseen.push(i);
}

while(k--){
    ans.push_back(unseen.front());
    seen.push(unseen.front());
    unseen.pop();
    ans.push_back(seen.front());
    seen.pop();
}
while(!seen.empty()){
    ans.push_back(seen.front());
    seen.pop();
}
while(!unseen.empty()){
    ans.push_back(unseen.front());
    ans.push_back(unseen.front());
    unseen.pop();

}
cout<<"YES\n";
for(auto it:ans){
    cout<<it<<" ";
}
cout<<"\n";

}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}
