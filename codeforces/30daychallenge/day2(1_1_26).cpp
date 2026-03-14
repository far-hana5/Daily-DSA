
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_set<long long> s;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long long cur = s.size();
        while (!s.count(cur)) {
            s.insert(cur);
            cur++;
        }

        cout << cur << "\n";
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,l,r;
        cin >> n>>l>>r;
         int pr[n+1];
         pr[0]=0;
         for(int i=1;i<=n;i++){
            if(i==r){
                pr[i]=pr[l-1];
            }else{
            pr[i]=i;
            }
         }

         for(int i=0;i<n;i++){
            cout<<(pr[i+1]^pr[i])<<" ";
         }
        cout<<endl;
    }
    return 0;
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
        string s,t;    cin>>s>>t;
         vector<int>frqs(26,0),frqt(26,0);

         for(auto c:s){ frqs[c-'a']++;}
         for(auto c:t){ frqt[c-'a']++;}
         bool possible=true;
         for(int i=0;i<26;i++){
            if(frqs[i]>frqt[i]){
                possible=false;break;
            }
         }

          if (!possible) {
            cout << "Impossible\n";
            continue;
        }

         sort(t.begin(), t.end());
         for (int i = 0; i < s.size(); i++) {
           size_t pos = t.find(s[i]);
              if (pos != string::npos) {
                t.erase(pos, 1);
                }
        }

string res="";int cnt=0;
   for(int i=0;i<t.size();i++){
           if(t[i]<s[0]){res=res+t[i];cnt++;}
           else{
            res=res+s;
           break;
           }
         }
         string lastpart=t.substr(cnt);
         res=res+lastpart;
cout<<res<<endl;

    }
    return 0;
}

