#include<bits/stdc++.h>
using namespace std;
void req(string s,int n){
if(n<0)return ;

req(s,n-1);
cout<<s[n]<<" ";
}
int main(){
int t;
cin>>t;

while(t--){
    string s;
    cin>>s;

    req(s,s.size()-1);
    cout<<endl;
}
}
