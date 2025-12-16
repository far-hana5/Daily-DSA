#include<bits/stdc++.h>
using namespace std;
void solve(){
string s;
cin>>s;

int c1=0,c2=0,c3=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='<')c1++;
    else if(s[i]=='*')c2++;
    else c3++;
}
string st=string(c1,'<')+string(c2,'*')+string(c3,'>');
if(c2>1 || st!=s)cout<<-1<<endl;
else cout <<max(c1+c2,c3+c2)<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
    solve();
}
}
