#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;

while(t--){
    int n,ans,c;
    cin>>n;
    string s;
    cin>>s;
c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
           c++;
        }
    }
  ans=c;

      for(int i=0;i<c;i++){

       if(s[i]=='0'){
           ans--;
       }

    }
    cout<<ans<<endl;


}
}
