
/*#include <bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];

int knapsack(int i,int max_wit){
    if(i<0)return 0;
    if(max_wit<=0)return 0;

int op2=0;
if(max_wit>=weight[i]) {
   op2=knapsack(i-1,max_wit -  weight[i])+val[i];
}

int op1=knapsack(i-1,max_wit);

return max(op1,op2);
}

int main(){
int n,mx_weight;
cin>>n;


for(int i=0;i<n;i++){
    cin>>val[i];
}

for(int i=0;i<n;i++){
    cin>>weight[i];
}
cin>>mx_weight;
knapsack(n-1,mx_weight);

}
*/

#include <bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];
int dp[1005][1005];
int knapsack(int i,int max_wit){
    if(i<0)return 0;
    if(max_wit<=0)return 0;

int op2=0;
if(max_wit>=weight[i]) {
   op2=knapsack(i-1,max_wit -  weight[i])+val[i];
}

int op1=knapsack(i-1,max_wit);

return dp[i][max_wit]= max(op1,op2);
}

int main(){
int n,mx_weight;
cin>>n;
cin>>mx_weight;


for(int i=0;i<n;i++){
    cin>>weight[i];
      cin>>val[i];
}


for(int i=0;i<=n;i++){
    for(int j=0;j<=mx_weight;j++){
        dp[i][j]=-1;
    }
}

 cout<<knapsack(n-1,mx_weight)<<endl;;

}
