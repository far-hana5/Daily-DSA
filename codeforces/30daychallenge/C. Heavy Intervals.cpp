
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,b;ll ans=0; cin>>n;
vector<pair<ll,char>>inter;
vector<ll>w(n);stack<ll>st;
vector<ll>diff;
for(int i=0;i<n;i++){
    cin>>b;
    inter.push_back({b,'l'});
}

for(int i=0;i<n;i++){
    cin>>b; inter.push_back({b,'r'});
}
for(int i=0;i<n;i++){
    cin>>w[i];
}
sort(inter.begin(),inter.end());
for(ll i=0;i<(ll)inter.size();i++){
    if(inter[i].second=='l'){
        st.push(inter[i].first);
    }else{
    ll dif=inter[i].first-st.top();
    diff.push_back(dif);
    st.pop();
    }
}
/*
for(auto d:diff){
    cout<<d<<" ";
}
cout<<endl;*/
sort(diff.begin(),diff.end(),greater<ll>());
sort(w.begin(),w.end());
for(int i=0;i<n;i++){
    ans+=w[i]*diff[i];
}
cout<<ans<<"\n";
}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}
