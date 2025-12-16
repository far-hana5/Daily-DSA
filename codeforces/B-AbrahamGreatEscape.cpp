
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k;
cin>>n>>k;

if(k==n*n-1){
    cout<<"NO\n";
    return;
}

vector<vector<int>>v(n,vector<int>(n,0));

if(k==n*n){
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<'U';
        }
        cout<<"\n";
    }
    return;
}

v[0][0]='R';
v[0][1]='L';

for(int i=2;i<n*n-k;i++){
    int r=i/n,c=i%n;

    if(r==0){
        v[r][c]='L';
    }else{
    v[r][c]='U';
    }
}

for(int i=n*n-k;i<n*n;i++){
    int r=i/n;int c=i%n;
    v[r][c]='D';

}
cout<<"YES\n";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<(char)v[i][j];
    }
    cout<<"\n";
}
}



int main(){
int t;
cin>>t;

while(t--){
    solve();
}

}
