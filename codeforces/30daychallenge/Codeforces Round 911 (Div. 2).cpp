/*

#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;cin>>n;
string s;cin>>s;
int h=0;int allh=0;bool b=false;
for(int i=0;i<n;i++){
   if(s[i+1]=='.'&&s[i]=='.') {
    h++;if(h>=2){b=true;break;}
   }else if(s[i]=='#'){
   h=0;
   }

}
for(int i=0;i<n;i++){
  if(s[i]=='.'){
   allh++;
   }
}
if(b)cout<<2<<endl;
else{
    cout<<allh<<endl;
}
}
int main(){
int t;cin>>t;

while(t--){
    solve();
}
}
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;cin>>a>>b>>c;
int fa=0,fb=0,fc=0;
if(abs(b-c)%2==0)fa=1;
if(abs(a-c)%2==0)fb=1;
if(abs(a-b)%2==0)fc=1;
cout<<fa<<" "<<fb<<" "<<fc<<"\n";

}
int main(){
int t;cin>>t;

while(t--){
    solve();
}
}

