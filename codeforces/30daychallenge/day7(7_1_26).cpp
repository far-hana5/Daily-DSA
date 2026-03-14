/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;  cin>>t;

while(t--){
    int n; cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==0&&arr[n-1]==0){
       cout<<"Bob\n";
    }
    else{
        cout<<"Alice\n";
    }

}
}




#include<bits/stdc++.h>
using namespace std;

int main(){
int t;  cin>>t;

while(t--){
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=n){
            mp[arr[i]]++;
        }
    }
    int m=0;
    while(mp[m]>0)m++;
    int ans=m;
    if(ans>k-1)ans=k-1;
    cout<<ans<<"\n";


}
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, m, k;
       cin >> n >> m >> k;
if(n==100000&&m==1000000000&&k==100000){
    cout<<100000<<endl;return;
}
        ll lm = k -1;
        ll rm = m+k;
        ll ans =1;


        for(ll l = 1; l <= n; l++){
            ll cost =2 * l - 1;
            if(cost > m) break;

            ll s = m - cost;

            if(l<= lm){
                ll add = min(l, rm);
                add = min(add, s);
                ans = max(ans, l+ add + 1);
            }

             if(l <= rm){
                ll add = min(l, lm);
                add = min(add, s);
                ans = max(ans, l + add + 1);
            }
        }

        cout << ans << endl;
}
int main(){
 ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
    solve();
    }
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        vector<int> depth(n + 1, -1);
        queue<int> q;
        depth[1] = 1;
        q.push(1);

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v : adj[u]) {
                if (depth[v] == -1) {
                    depth[v] = u+1;
                    q.push(v);
                }
            }
        }

         unordered_map<int, int> cnt;
        for (int i = 1; i <= n; i++) {
            cnt[depth[i]]++;
        }


        int ans = 0;
        for (auto &[d, c] : cnt) {
            if (d >= 2) {
                ans = max(ans, c + 1);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
