/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
if(cin>>t){
    while(t--){
       ll n,w;
       cin>>n>>w;
       cout<<n-(n/w)<<"\n";
    }
}
return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,m;cin>>n>>m;

vector<vector<int>>arr(n,vector<int>(m));
ll totalzero=0;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cin>>arr[i][j];
             totalzero= totalzero+arr[i][j];
        }

}
ll rem=totalzero/2;
ll rest=(rem) * ((totalzero+1)/2);
cout<<rest<<"\n";

 int end1=n-1;int end2=m-1;
for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){

            rem=rem-arr[j][i];
            if(rem==0){
                end1=j;
                end2=i;break;
            }
        }
       if(rem==0)break;

}
//cout<<end1<<end2<<endl;
string res="";
for(int i=0;i<end2;i++){
    res=res+'R';
}
for(int i=0;i<=end1;i++){
    res=res+'D';
}
 res=res+'R';
 for(int i=0;i<(n-end1-1);i++){
    res=res+'D';
}
for(int i=0;i<m-end2-1;i++){
    res=res+'R';
}
cout<<res<<endl;
}
int main(){
int t;
cin>>t;
    while(t--){
      solve();
    }

return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
   ll x, y;
    if (!(cin >> n >> x >> y)) return;
    vector<ll> a(n);
    ll total = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        ll t = a[i] / x;
        total += (t * y);
    }

  ll res = 0;

    for (int i = 0; i < n; ++i) {

        ll currentTransfers = a[i] / x;
        ll currTotal = (total - (currentTransfers * y)) + a[i];

        if (currTotal > res) {
            res = currTotal;
        }
    }

    cout <<res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve() {
    int n, k;
    cin>>n>>k;
   vector<int> av(n,0);
    for (int i=0;i<k; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; ++j) {
            av[j] |=(1<<(s[j] - 'a'));
        }
    }
    vector<int> divisors;
    for (int i=1;i*i<=n;++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i*i != n) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());

    for (int d : divisors) {
        string unit="";
        bool f = true;

        for (int i =0; i<d; ++i) {
            int common = (1 << 26) - 1;
            for (int j = i; j < n; j += d) {
                common&=av[j];
            }

            if (common==0) {
               f= false;
                break;
            } else {
                for (int bit=0; bit<26; ++bit) {
                    if ((common>>bit) &1) {
                        unit += (char)('a' + bit);
                        break;
                    }
                }
            }
        }

        if (f) {
            string res= "";
            for(int i= 0; i< n/d;++i) res+=unit;
            cout<< res<<"\n";
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
*/
