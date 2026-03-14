
/*
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve() {
    // Your problem-solving code goes here
    // Example:
     ll n;
     cin >> n;
    vector<pair<ll,ll>> arr(n);
    set<ll>st;vector<ll>barr;
    for(int i=0; i<n; i++){
        cin >> arr[i].first;
        arr[i].second=i;
        st.insert(i);
        barr.push_back(arr[i].first);
    }
sort(arr.begin(),arr.end());
ll cost=0;

for(auto& [val,cur_ind]:arr){
        if(st.size()==1)break;
  auto left_itr=st.lower_bound(cur_ind)  ;
  if(left_itr==st.begin())left_itr=st.end();
  left_itr--;
  auto right_itr=st.upper_bound(cur_ind);
  if(right_itr==st.end())right_itr=st.begin();

  ll L=*left_itr,R=*right_itr;
  cost+=min(barr[L],barr[R]);
  st.erase(cur_ind);
}
cout<<cost<<endl;
}

int main() {
    // Optimization for faster I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Test case handling (uncomment the next line to enable)
    ll test ;cin>>test;
    // cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}

*/
/*
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve() {
    // Your problem-solving code goes here
    // Example:
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++) cin >> arr[i];
    // ... your logic ...
    int n;cin>>n;
    string s; cin>>s;
    int cnt=0;
    for(int i=n-1;i>0;i--){

        if(s[i]!=s[i-1]){
                //cout<<s[i]<<" "<<s[i-1]<<endl;
            s[i-1]=s[i];cnt++;
        }

    }

    cout<<cnt<<endl;
}

int main() {
    // Optimization for faster I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Test case handling (uncomment the next line to enable)
    ll test ;cin>>test;
    // cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}

*/


#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

void solve() {
    // Your problem-solving code goes here
    // Example:
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++) cin >> arr[i];
    // ... your logic ...
       ll a, b, n;
    cin >> a >> b >> n;
    if (a == b) {
        cout << "1\n";
    } else {
        if (n * b > a)
            cout << "2\n";
        else
            cout << "1\n";
    }
}

int main() {
    // Optimization for faster I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Test case handling (uncomment the next line to enable)
    ll test ;cin>>test;
    // cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}



