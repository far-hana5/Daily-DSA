#include <bits/stdc++.h> // Includes most standard library headers
using namespace std;     // Allows use of standard library components without the 'std::' prefix

// Type definitions for convenience
using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

// Macros/Shortcuts (use sparingly as they can impact readability/debugging)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) // A common loop macro

// Main function entry point
int main() {
    // Fast I/O: Optimizes cin and cout for performance
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // --- Problem-specific code goes here ---
    // Example: Read the number of test cases
    int T;
    cin >> T;
    while (T--) {
        // Example: Read an integer N and an array of N long longs
        ll p,q;
        cin >>p>>q;
        ll d=q-p;
        if(d<=0)cout<<"Alice\n";
        else{
            ll uppor=2*d;ll nich=3*d;
            if(uppor>p||nich>q){
                cout<<"Alice\n";
            }else{
            cout<<"Bob\n";
            }
        }


    }
    // -------------------------------------

    return 0; // Indicates successful execution
}

