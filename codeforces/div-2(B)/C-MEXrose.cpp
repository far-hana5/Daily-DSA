#include<bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    vector<int>f(n+1,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
        f[arr[i]]++;
    }
int c=0,c1=f[k];
      for(int i=0;i<k;i++){
        if(f[i]==0){
         c++;
      }

    }
    cout<<max(c,c1)<<endl;

   }
}
