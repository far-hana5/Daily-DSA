/*
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    ll n, k;
    cin >> n >> k;
    ll kore = 0, naKore = 0;
    for (int i = 0; i < n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        naKore += (b - 1) * a; // back na kore sob gula miliye koto agaite parbo
        kore = max(kore, b * a - c); // back kore 1ta diye koto agaite parbo
    }
    ll arBakiKoto = k - naKore;
    if (arBakiKoto == 0||arBakiKoto<0)
        cout << "0\n";
    else if (arBakiKoto > 0 && kore == 0)
        cout << "-1\n";
    else
        cout << (arBakiKoto + kore - 1) / kore << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}
*/



#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    ll n;
    cin >> n;
    if(__builtin_popcount(n)==1){
        cout<<"-1\n";return;
    }
    ll allxor=0;
   for(int i=1;i<=n;i++){
    allxor=i^allxor;
   }
   vector<ll>ans(n+1);
   ans[n]=1;
   allxor=allxor^ans[n];
   for(int i=n-1;i>=2;i--){
    ans[i]=i^1;
    allxor=allxor^ans[i];
   }
   ans[1]=allxor;
   if(n%2==0){
    swap(ans[1],ans[1<<__builtin_ctz(n)]);
   }
   for(int i=1;i<=n;i++){
    cout<<ans[i]<<" \n"[i==n];
   }

}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}
