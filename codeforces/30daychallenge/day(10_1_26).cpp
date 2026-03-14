/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        long long sum=0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

        }

        sort(arr.begin(), arr.end(), greater<int>());
        int last=n;

        for(int i=0;i<n;i++){
             sum+=arr[i];
             if(arr[i]==0){
                last=i;break;
             }
        }
        if(arr[0]==n){
            cout<<last<<"\n";continue;
        }int j=1;int ans=0;
        for(int i=0;i<n;i++){
             if(sum-last<n-j){
                last--;
             }else{
             ans=last;break;
             }
        }

      cout << ans << "\n";

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

    int t;
    cin >> t;

    while (t--) {
        string n;
        int j, k;
        cin >> n >> j >> k;

        // Generate all permutations
        sort(n.begin(), n.end());
        vector<string> perms;
        do {
            perms.push_back(n);
        } while (next_permutation(n.begin(), n.end()));

        // Get the j-th and k-th permutations (1-indexed)
        string a = perms[j - 1];
        string b = perms[k - 1];

        int A = 0, B = 0;
        int len = a.size();

        vector<bool> usedA(len, false), usedB(len, false);

        // Count A (same position)
        for (int i = 0; i < len; i++) {
            if (a[i] == b[i]) {
                A++;
                usedA[i] = usedB[i] = true;
            }
        }

        // Count B (same digit, different position)
        for (int i = 0; i < len; i++) {
            if (usedA[i]) continue;
            for (int j = 0; j < len; j++) {
                if (usedB[j]) continue;
                if (a[i] == b[j]) {
                    B++;
                    usedA[i] = usedB[j] = true;
                    break;
                }
            }
        }

        cout << A << "A" << B << "B\n";
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        long long sum=0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }int ans=0;int x,y;
      for(int i=n-1;i>=0;i--){
        for(int j=0;j<i-1;j++){
            int rem=arr[i]%arr[j];
            if(rem%2==0&&rem!=0){
                ans=1;x=arr[j];y=arr[i];
                break;
            }
        }
      }
      if(ans==1){
        cout<<x<<" "<<y<<"\n";
      }else{
        cout<<-1<<"\n";
      }


    }

    return 0;
}
