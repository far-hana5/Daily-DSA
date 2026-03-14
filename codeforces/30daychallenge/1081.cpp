
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {

    ll n,h,k;cin>>n>>h>>k;
    vector<int>v(n);ll sum=0;
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
    int maxnum=-1;int maxind=-1;
    for(int i=0;i<n;i++){
     sum=sum+v[i];
     if(v[i]>=maxnum){
        maxnum=v[i];maxind=i;
     }
    }
    ll ans=0;
    if(h%sum==0){
        ll div=h/sum;
        ans=(div-1)*k+div*n;
    }else if(h%sum!=0){
        int small=f(v,)
        swap(v[0],v[maxind]);
        ll rem=h%sum; ll div=h/sum;int extra=0;
        int i=0;
        while(rem!=0){
            rem=rem-v[i++];extra++;
                if(rem<=0){
                break;
                }
        }
    ans=(div*k)+(div*n)+extra;
    }


cout<<ans<<endl;
}

int main() {
int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
