

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
vector<int>a1(n),a2(n);
for(int i=0;i<n;i++){
    cin>>a1[i];
}
for(int i=0;i<n;i++){
    cin>>a2[i];
}
ll ans=INT_MIN;
for(int i=0;i<n;i++){
    ll sum=a1[i]+a2[i];
    for(int j=0;j<n;j++){
        if(i!=j){
            sum+=max(a1[j],a2[j]);
        }
    }
    ans=max(sum,ans);
}

 cout << ans << "\n";

    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tt; cin >> tt;

    while(tt--) {
        int n; cin >> n;

        vector<pair<int,int>>a(n);

        for(auto &i : a) cin >> i.first;
        for(auto &i : a) cin >> i.second;

        sort(a.begin(), a.end(), [&](auto &left, auto &right) {
            return left.first - left.second > right.first - right.second;
        });

        int answer = LLONG_MIN;

        for(int i = 0; i < n; i++) {
            int sum = a[i].first + a[i].second;

            for(int j = 0; j < n; j++) {
                if(i != j) sum += a[j].second;
            }

            answer = max(answer, sum);

            for(int j = 0; j < n; j++) {
                if(i != j) {
                    sum -= a[j].second;
                    sum += a[j].first;
                    answer = max(answer, sum);
                }
            }
        }

        cout << answer << "\n";
    }
}
*/
