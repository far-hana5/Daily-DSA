
//Codeforces Round 1067 (Div. 2)

//problem a
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,y,r;
    cin>>n>>y>>r;
    int res=r+(y/2);
    if(res>n)cout<<n<<"\n";
    else cout<<res<<"\n";
    }
}
*/
//Recursion on Subsequences
#include <bits/stdc++.h>
using namespace std;
void subsequence(int ind,vector<int>&ds,int arr[],int n){
if(ind==n){
    for(int it:ds){
    cout<<it<<" ";
   }
   cout<<endl;return;
}

ds.push_back(arr[ind]);
subsequence(ind+1,ds,arr,n);
ds.pop_back();

subsequence(ind+1,ds,arr,n);
}

int main() {
   int arr[]={3,1,2};
   int n=3;
   vector<int>ds;
subsequence(0,ds,arr,n);
}
