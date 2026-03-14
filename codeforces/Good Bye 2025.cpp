#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       string s;int ans=0;
       cin>>s;
       if(s[0]=='u'){
         ans++;s[0]='s';
       }

       if(s.back()=='u'){
            ans++;
            s.back()='s';
       }
       vector<pair<char,int>>v(1,{'s',1});
       for(int i=1;i<s.size();i++){
        if(s[i]==v.back().first)v.back().second++;
        else v.push_back({s[i],1});
       }

       for(int i=1;i<v.size();i+=2){
        ans+=v[i].second/2;
       }
       cout<<ans<<endl;



    }
}
