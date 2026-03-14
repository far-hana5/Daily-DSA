//2181H	Honey Cake
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>all_divisors(ll num){
vector<ll>divisors;
for(int i=1;i*i<=num;i++){
   if(num%i==0){
    divisors.push_back(i);
    if(i!=num/i)divisors.push_back(num/i);
   }
}
sort(divisors.begin(),divisors.end());
return divisors;
}
int main(){
ll w,h,d,n;
cin>>w>>h>>d>>n;

auto divisors=all_divisors(n);

for(auto x:divisors){
    if(w%x!=0)continue;
    for(auto y:divisors){
        if(h%y!=0)continue;
        ll product=x*y;
        if(product>n||n%product!=0)continue;
        ll z=n/product;
        if(d%z==0){
            cout<<(x-1)<<" "<<(y-1)<<" "<<(z-1)<<endl;
            return 0;
        }
    }
}
cout<<-1<<endl;
}
*/
//A. Needle in a Haystack
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t1;
    cin >> t1;

    while (t1--) {
        string s, t;
        cin >> s >> t;

        int n = s.length(), m = t.length();

        if (m < n) {
            cout << "Impossible\n";
            continue;
        }

        map<char, int> mp_t;
        for (char c : t) mp_t[c]++;

        bool ok = true;
        for (char c : s) {
            if (mp_t[c] > 0)
                mp_t[c]--;
            else {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "Impossible\n";
            continue;
        }

        string extra = "";
        for (auto &p : mp_t) {
            extra.append(p.second, p.first);
        }

        string res = "";
        int i = 0, j = 0;

        while (i < extra.length() && j < n) {
            if (extra[i] < s[j])
                res += extra[i++];
            else
                res += s[j++];
        }

        while (j < n) res += s[j++];
        while (i < extra.length()) res += extra[i++];

        cout << res << "\n";
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t1;
    cin >> t1;
    while (t1--) {
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

string res="";int i=0;int j=0;;
    while (i < t.length() && j < s.length()) {
            if (t[i] < s[j])
                res += t[i++];
            else
                res += s[j++];
        }
  while (j < s.length()) res += s[j++];
        while (i <t.length()) res += t[i++];

        cout << res << "\n";

    }
    return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1=0;int j2=0;vector<int>v;
        while(i1<nums1.size() &&j2<nums2.size()){
           if(nums1[i1]<nums2[j2] ) {
             v.push_back(nums1[i1++]);
           }else if (nums1[i1]>=nums2[j2]){
             v.push_back(nums2[j2++]);
           }
        }
        if(i1<nums1.size())v.push_back(nums1[i1++]);
        if(j2<nums2.size())v.push_back(nums2[j2++]);

        for(auto it:v){
            cout<<it<<" ";
        }
    }

    int main(){
    vector<int>nums1={1,2,3,0,0,0};
    int m=3;
    vector<int>nums2={2,5,6};
    int n=3;
    merge(nums1,m,nums2,n);
    }
