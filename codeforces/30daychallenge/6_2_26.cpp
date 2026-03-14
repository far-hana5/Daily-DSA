#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
ll n;cin>>n;
ll arr[2][n];
for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
vector<pair<ll,ll>>pref(n),suff(n);
pref[0]={arr[0][1],arr[0][1]};
for(int i=1;i<n;i++){
    pref[i]={arr[0][i],arr[0][i]};
    pref[i].first=min(pref[i].first,pref[i-1].first);
    pref[i].second=max(pref[i].second,pref[i-1].second);
}
suff[n-1]={arr[1][n-1],arr[1][n-1]};
for(int i=n-2;i>=0;i--){
    suff[i]={arr[1][i],arr[1][i]};
    suff[i].first=min(suff[i].first,suff[i+1].first);
    suff[i].second=min(suff[i].second,suff[i+1].second);


}
map<ll,ll>startingToEnding,endingToStarting;
for(int i=0;i<n;i++){
    //preff[i] suff[i]
    ll mn=min(pref[i].first,suff[i].first);
    ll mx=max(pref[i].second,suff[i].second);

    if(startingToEnding.count(mn)){
        startingToEnding[mn]=min(startingToEnding[mn],mx);

    }else{
    startingToEnding[mn]=mx;
    }
}
for(auto [l,r]:startingToEnding){
    if(endingToStarting.count(r)){
        endingToStarting[r]=max(endingToStarting[r],l);

    }else{
    endingToStarting[r]=l;
    }
}

vector<pair<ll,ll>>v;
for(auto [r,l]:endingToStarting){
    v.push_back({l,r});
}
sort(v.begin(),v.end());

}


int main(){
int t;  cin>>t;
while(t--){
    solve();
}
}
