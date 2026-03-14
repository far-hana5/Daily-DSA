#include<bits/stdc++.h>
using namespace std;

void solve(){
int n;cin>>n;
string s;cin>>s;
string st;
for(auto &x:s){
    if(st.size()&&st.back()==x){

        st.pop_back();
    }else{
    st.push_back(x);
    }
}
if(st.empty()){
    cout<<"yes"<<"\n";
}else{
cout<<"no"<<"\n";
}
}
int main(){
int t;cin>>t;
while(t--){
    solve();
}

}
