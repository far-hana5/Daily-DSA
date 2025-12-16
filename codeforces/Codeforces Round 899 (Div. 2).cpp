/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;      cin>>t;

while(t--){
    int n;   cin>>n;
    vector<int>allnum;
    vector<int>arr[n];
    for(int i=0;i<n;i++){
        int k;    cin>>k;
        arr[i].resize(k);
        for(int j=0;j<arr[i].size();j++){
            cin>>arr[i][j];
            allnum.push_back(arr[i][j]);
        }
    }
    sort(allnum.begin(),allnum.end());
    allnum.erase(unique(allnum.begin(),allnum.end()),allnum.end());

    int ans=0;
    for(int exclude=1;exclude<=50;exclude++){
        vector<int>temp;
        for(int i=0;i<n;i++){
            bool f=false;
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j]==exclude){
                    f=true;
                    break;
                }
            }

            if(!f){
                for(int j=0;j<arr[i].size();j++){
                    temp.push_back(arr[i][j]);
                }
            }
        }
        sort(temp.begin(),temp.end());
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        if(temp!=allnum){
            ans=max(ans,(int)temp.size());
        }

    }
    cout<<ans<<endl;
}
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;      cin>>t;

while(t--){
    int n;   cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int trac=1;
    vector<int>res;
      for(int i=0;i<2*n+1;i++){
        if(trac==arr[i]){
            trac++;
            res.push_back(trac);
        }else res.push_back(trac);
         trac++;
         if(n==res.size())break;
    }
 for(int i=res.size()-1;i>=0;i--){
   cout<<res[i]<<"\n";
break;
 }


}
}
