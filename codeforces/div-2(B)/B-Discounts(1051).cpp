

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;

    vector<int>b(k);
    vector<int>a(n);

   for(int i=0;i<n;i++){
    cin>>a[i];
   }
  for(int i=0;i<k;i++){
    cin>>b[i];
   }

   sort(a.begin(),a.end(),greater<int>());
   sort(b.begin(),b.end());
   int part=0;

   for(int i=0;i<k;i++){

     part=part+b[i];
      if(part>n){
            break;
          }
    a[part-1]=-1;



   }
   long long ans=0;
    for(int i=0;i<n;i++){
   if(a[i]!=-1){
    ans=ans+a[i];
   }
   }
   cout<<ans<<endl;

}
}
