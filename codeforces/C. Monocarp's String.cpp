
#include <bits/stdc++.h>
using namespace std;

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);



        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalA = count(s.begin(), s.end(), 'a');
        int totalB = n - totalA;
        int diff = totalA - totalB;

     //   if (diff == 0) {
        //    cout << 0 << "\n";
           // continue;
      //  }
           vector<int>pref(n+1,0);
          for (int i = 1; i <= n; i++) {
            pref[i] = pref[i-1]+ (s[i - 1] == 'a' ? 1 : -1);
}

      for (int i = 1; i <= n; i++) {
          cout<<pref[i]<<" ";
}

/*
        // Map: prefix sum -> earliest index
        unordered_map<int, int> mp;
        int ans=n+1;
        mp[0] = 0;  // prefix before the string

*/

 /*
        for (int i = 1; i <= n; i++) {


            int target = pref[i] - diff;
            if (mp.find(target)!=mp.end()) {
                int len = i - mp[target];
                ans = min(ans, len);
            }


                mp[pref[i]] = i;
        }

        if (ans == n+1)ans = n;
        if(ans == n)cout << -1 << "\n";
        else cout << ans << "\n";
            */

    return 0;
}
