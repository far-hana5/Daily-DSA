#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;


while(t--){
    int n,a;
    cin>>n>>a;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c=0,ans=0;
    for(int i=0;i<n;i++){

        if(arr[i]<a){
            c++;
        }
    }
    int c1=n-c;
    if(c1>c){
        ans=a+1;
    }else{
    ans=a-1;
    }
cout<<ans<<endl;
}
}
