//C. Sorting Game

#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;cin>>n;
string s;cin>>s;
vector<int> indices;

   string sorted = s;
    sort(sorted.begin(), sorted.end());

    if (s == sorted) {
        cout << "Bob\n";
        return;
    }

cout<<"Alice\n";




    for (int i = 0; i< n; i++) {
        if (s[i] !=sorted[i] ) {
            indices.push_back(i+ 1);
        }
    }
    cout<<indices.size()<<"\n";
    for (int idx : indices) cout << idx << " ";
    cout << "\n";


}
int main(){
int t;cin>>t;
while(t--){
    solve();
}
}
