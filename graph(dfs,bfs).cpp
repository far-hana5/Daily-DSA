/*
Problem Statement

You will be given a directed graph as input. Then you will receive  queries. For each query, you will be given two nodes,  and . You need to determine whether you can go from  to  directly without using any other nodes.

Input Format

The first line will contain  and , the number of nodes and the number of edges, respectively. The values of the nodes range from  to .
Next  lines will contain two node values which means there is a connection from first node to second node.
The next line will contain .
The following  lines will each contain  and .
Constraints

Output Format

For each query output YES if it is possible to go from  to  directly without using any other nodes, NO otherwise. Don't forget to put a new line after each query.
Sample Input 0

5 6
0 1
1 2
2 3
3 4
1 4
0 2
10
0 1
1 0
2 2
2 3
0 3
3 0
1 4
4 1
4 3
1 2
Sample Output 0

YES
NO
YES
YES
NO
NO
YES
NO
NO
YES
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,e;
    cin>>n>>e;

    vector<vector<int>>adj_list(n);

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);


    }


    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES\n";
            continue;
        }
        bool f=false;
        for(int child:adj_list[a]){
            if(child==b){
                f=true;break;
            }

        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}
*/
/*
Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall, a floor or a room. You will be given two rooms  and . You need to tell if you can go from room  to  by passing through the floors. You can walk left, right, up, and down through the floor cells. You can't pass through walls.

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is .(floor), #(wall), A or B (rooms).
Constraints

Output Format

Output YES if you can go from room  to , NO otherwise.
Sample Input 0

5 8
########
#.A#...#
#.##.#B#
#......#
########
Sample Output 0

YES
*/

/*
#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n,m;
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
if(i<0||i>=n ||j<0||j>=m){
 return false;
}
if(grid[i][j]=='#')return false;
return true;

}

bool dfs(int si,int sj,int bi,int bj){
vis[si][sj]=true;
if(si==bi&&sj==bj)return true;

for(int i=0;i<4;i++){
    int ci=si+d[i].first;int cj=sj+d[i].second;
    if(valid(ci,cj)==true && !vis[ci][cj]){
        if(dfs(ci,cj,bi,bj))return true;
    }
}
return false;
}

int main(){
cin>>n>>m;
int ai,aj,bi,bj;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
        if(grid[i][j]=='A'){
            ai=i;aj=j;
        }
        if(grid[i][j]=='B'){
            bi=i;bj=j;
        }
    }
}
memset(vis,false,sizeof(vis));
if(dfs(ai,aj,bi,bj))cout<<"YES\n";
else cout<<"NO\n";

}
*/

/*
Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number rooms in each of the apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

You need to print the count of the rooms in ascending order. If there are no apartments available in that building, then you should print .

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is either .(room) or #(wall).
Constraints

Output Format

Output the number of rooms in each of the apartments in ascending order.
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

2 2 8
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

1 1 2 8 10



#include <bits/stdc++.h>
using namespace std;
 char grid[1005][1005];
 bool vis[1005][1005];

vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}} ;
int n,m;
bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m){
        return false;
    }
    if(grid[i][j]=='#')return false;
    return true;
}

int dfs(int si,int sj)
{


 vis[si][sj]=true;
int store=1;

 for(int i=0;i<4;i++){
     int ci=si+d[i].first;
     int cj=sj+d[i].second;
     if(valid(ci,cj)==true &&!vis[ci][cj]){
        store+= dfs(ci,cj);
     }
 }
    return store;

}
int main()
{

cin>>n>>m;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){
        cin>>grid[i][j];

    }
}


memset(vis,false,sizeof(vis));
    vector<int>result;
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){

       if(vis[i][j]==false && grid[i][j]=='.'){
          int res= dfs(i,j);
           result.push_back(res);
       }
    }
    }
    if(result.empty()){
        cout<<0<<"\n";
        return 0;
    }
    sort(result.begin(),result.end());
    for(int r:result){
        cout<<r<<" ";
    }
cout<<"\n";
//cout<<dfs<<endl;



*/
