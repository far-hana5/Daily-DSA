
/*
#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;cin>>n;
vector<char>st;
vector<char>redo;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(s=="TYPE"){
        char ch;cin>>ch;
        st.push_back(ch);
        redo.clear();

    }
    else if(s=="UNDO"){
        if(st.empty()==false){
                char ch1=st.back();
            redo.push_back(ch1);
            st.pop_back();
        }
    }else{
    if(redo.empty()==false){
        char ch2=redo.back();
        st.push_back(ch2);
        redo.pop_back();
    }
    }

}
for(auto c:st){
    cout<<c;
}
cout<<"\n";
}
int main(){
solve();
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ps(ll x){
ll k=x/2;
ll sum=k*(k+1);
if(x%2!=0){
    sum+=(k+1);
}
return sum;
}
int main(){
ll n,q;cin>>n>>q;

while(q--){
    ll l,r;cin>>l>>r;

    cout<<ps(r)-ps(l-1)<<endl;

}
}
*/


#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void solve(){
string s,t;cin>>s>>t;
int n=s.size();int m=t.size();
vector<ll>dp(m+1,0);
dp[0]=1;
//vector<vector<ll>>mem(n,vector<ll>(m,-1));
for(int i=0;i<n;i++){
    for(int j=m;j>=1;j--){
            if(s[i]==t[j-1]){
                dp[j]=dp[j]+dp[j-1];
            }

    }
}
cout<<dp[m]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}

/*

ll solveRecursive(int s_idx, int t_idx, const string& S, const string& T, vector<vector<ll>>& memo) {
    // Base Case: If we've matched all characters of T
    if (t_idx == T.length()) {
        return 1;
    }
    // Base Case: If we've exhausted S but not T
    if (s_idx == S.length()) {
        return 0;
    }

    // Check if result is already computed
    if (memo[s_idx][t_idx] != -1) {
        return memo[s_idx][t_idx];
    }

    // Choice 1: Always try skipping the current character of S
    ll result = solveRecursive(s_idx + 1, t_idx, S, T, memo);

    // Choice 2: If characters match, try including S[s_idx] in the subsequence
    if (S[s_idx] == T[t_idx]) {
        result += solveRecursive(s_idx + 1, t_idx + 1, S, T, memo);
    }

    // Store and return the result
    return memo[s_idx][t_idx] = result;
}

void solve() {
    string S, T;
    if (!(cin >> S >> T)) return;

    int n = S.length();
    int m = T.length();

    // Initialize memo table with -1
    vector<vector<ll>> memo(n, vector<ll>(m, -1));

    cout << solveRecursive(0, 0, S, T, memo) << endl;
}


*/
