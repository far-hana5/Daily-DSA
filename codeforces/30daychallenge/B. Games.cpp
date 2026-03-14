#include<bits/stdc++.h>
using namespace std;
void solve(){
 int n,m;cin>>n>>m;
    vector<int>a(n);vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    if(n>m){
        cout<<m*2<<"\n";
    }else{
    cout<<n*2-1<<"\n";
    }
}
int main(){
int t;cin>>t;
while(t--){
   solve();
}

}
