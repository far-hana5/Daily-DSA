#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;  cin >> n>>k;
        string s;  cin>>s;
 int c=0;int a_end=-1;
     for(int i=0;i<n;i++){
        if(s[i]=='1'){
            int en =i+k;
            if(en>a_end){
                a_end=en;
            }
        }
        if(i>a_end){
        c++;
        }
     }
     cout<<c<<endl;
    }
    return 0;
}

