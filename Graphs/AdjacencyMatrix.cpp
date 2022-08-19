// SC: O(n^2)

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    // m ->No. of Nodes
    // n -> No. of Edges
    int adj[n +1][n +1];
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] =1;
    }
}