#include<bits/stdc++.h>
using namespace std;
#define forall(i,a,b) for(int i=a;i<b;i++)

void BFS(int &startEle,int &n,vector<vector<int>> adjm){
    bool visited[n+1];

    forall(i,0,n+1){
        visited[i]=0;
    }
    queue<int> q;
    q.push(startEle);
    cout<<startEle<<" ";
    visited[startEle]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        forall(j,1,n+1){
            if(visited[j]==0 && adjm[u][j]==1){
                q.push(j);cout<<j<<" ";visited[j]=1;
            }
        }
    }


}
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>>adjm(n+1,vector<int>(n+1,0));
// 6 6
// 1 2
// 1 3
// 2 4
// 3 4
// 4 5
// 4 6
// 1
    forall(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    int startEle;
    cin>>startEle;
    BFS(startEle,n,adjm);
    // forall(i,1,n+1){
    //     forall(j,1,n+1){
    //         cout<<adjm[i][j];
    //     }
    //     cout<<endl;
    // }
    return 0;

}
// #include <bits/stdc++.h>
// using namespace std;
// #define fastio()                      \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// typedef long long ll;
// typedef long double ld;
// #define forall(i, a, b) for (ll i = a; i < b; i++)
// #define en "\n"
// #define deb(x) cout << #x << " " << x << "\n"
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define eb emplace_back
// #define bg begin()
// #define ed end()
// #define sz size()
// #define vi vector<int>
// #define yes cout<<"YES"<<en;
// #define no cout<<"NO"<<en;
// #define print(x) cout<<x<<en;
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462

// void solve()
// {
    
// }

// int main()
// {
//     fastio();
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
