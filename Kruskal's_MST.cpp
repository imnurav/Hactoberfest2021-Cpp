// Time Complexity:
// In Kruskal’s algorithm, most time consuming operation is sorting because the total complexity of the 
// Disjoint-Set operations will be O(ElogV), which is the overall Time Complexity of the algorithm.

// Algorithm Steps:
// 1 - Sort the graph edges with respect to their weights.
// 2 - Start adding edges to the MST from the edge with the smallest weight until the edge of the largest weight.
// 3 - Only add edges which doesn't form a cycle , edges which connect only disconnected components.

#include<bits/stdc++.h>

using namespace std;

const int MAX =1e5 ;
int id[MAX], nodes, edges ;
pair<int,pair<int,int>> p[MAX] ;

void initialize()
{
    for(int i=0 ; i<MAX ; i++) 
        id[i]=i ;
}   

int root(int x){
    while(id[x]!=x){
        id[x] = id[id[x]] ;
        x = id[x] ;
    }
    return x;
}

void union1(int x,int y){
    int p = root(x) ;
    int q = root(y) ;
    id[p] = id[q] ;
}

int kruskal(int n){

    // Sort the edges in the ascending order
    sort(p,p+n) ;
    int x,y,mincost=0,cost ;
    for(int i=0 ; i<n ; i++){  // loop till number of Edges
        x = p[i].second.first ;
        y = p[i].second.second ;
        cost = p[i].first;
        if (root(x)!=root(y)){
            mincost+=cost ;
            union1(x,y) ;
        }
    }
    return mincost ;
}

int main(){
    int x, y;
    long long weight, cost, minimumCost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    minimumCost = kruskal(edges);
    cout << minimumCost << endl;
    return 0 ;
}

/*  EXAMPLE :
            6 9
            1 2 2
            1 4 1
            1 5 4
            2 3 3
            2 4 3
            2 6 7
            3 6 8
            3 4 5
            4 5 9
    OUTPUT : 17
*/
