#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,q;
    cin>>n>>q;

    vector<ll>a(n),b(n);

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    for(ll i=n-1;i>=0;i--){
        a[i]=max(a[i],b[i]);

        if(i<n-1){
            a[i]=max(a[i],a[i+1]);
        }
    }


vector<ll>pref(n);
    pref[0] = a[0];

    for(ll i=1;i<n;i++){
        pref[i] = pref[i-1] + a[i];
    }

    while(q--){
        ll l,r;
        cin>>l>>r;

        // convert to 0-index
        l--;
        r--;

        ll ans;

        if(l==0) ans = pref[r];
        else ans = pref[r] - pref[l-1];

        cout<<ans<<" ";
    }

    cout<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}
