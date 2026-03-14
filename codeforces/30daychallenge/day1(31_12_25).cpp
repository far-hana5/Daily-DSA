//Codeforces Round 1070 (Div. 2)
//A - Operations with Inversions

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
            int n;  cin>> n;
            vector<int>arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
           int c=0;
  for(int j=0;j<n;j++){
         for(int i=1;i<arr.size();i++){
                if(arr[i-1]>arr[i]){
                        c++;
                        arr.erase(arr.begin()+i);
                        break;
                }
            }
  }

cout<<c<<endl;


    }
}

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
           int n;  cin>>n;
           string s;  cin>>s;

           int last=0;
           for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){last=i;break;}
           }
           int first=-1;
           int ans=0;
           for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(first==-1){
                    ans=max(ans,i+n-last);
                }else{
                   ans=max(ans,i-first);
                }
            }else{
            first=i;
            }
           }
cout<<ans<<endl;
    }
}

