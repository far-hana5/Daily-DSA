#include<bits/stdc++.h>
using namespace std;

vector<bool>sieve(int n){
vector<bool>primes(n+1,true);
//prime->true
//not prime->false

primes[0]=false;
primes[1]=false;
for(int i=2;i*i<=n;i++){
    if(primes[i]==true){
        for(int j=i*i;j<=n;j+=i){
            primes[j]=false;
        }
    }
}
return primes;
}

int main(){
int n;
cin>>n;
vector<bool>primes=sieve(n);


}
