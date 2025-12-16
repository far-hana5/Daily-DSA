#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    vector<int>v(n),res(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

     for(int i=0;i<n;i++){
        int diff=v[i+1]-v[i];
        if(i-diff>=0){
            res.push_back(i-diff);
        }else{
        res.push_back(i+1);
        }
    }
     for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
}
}
