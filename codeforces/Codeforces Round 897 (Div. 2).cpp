#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
ll n;
cin>>n;
vector<ll>a(n);
vector<pair<ll,ll>>v;

for(int i=0;i<n;i++){
    cin>>a[i];
    v.push_back(make_pair(a[i],i+1));
}
 sort(v.begin(), v.end());
 reverse(v.begin(), v.end());
for (auto i : v)
        cout <<i.second<<" ";

cout<<endl;
}


int main(){
int t;
cin>>t;
while(t--){
  solve();
}


}
