#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &graph,int n,int m,int i){
    vector<int> vis(n,0);
    queue<int> q;
    q.push(i); // Enqueue i for exploration
    vis[i] = 1; // i is the starting point
    cout<<i<<" ";
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int j = 0; j < m; j++)
        {
            if (graph[node][j] == 1 && vis[j] == 0)
            {
                // If connected & not in visited list
                cout<<j<<" ";
                q.push(j);
                vis[j] = 1;
            }
        }
    }
}

int main()
{
    // Time Complexity: O(V^2) when Adjacency Matrix is used and O(V + 2E) when Adjacency List is used
    // V=Vertex, E=Edges

    int n=7,m=7,i=2;
    vector<vector<int>> graph{
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };
   
    bfs(graph,n,m,i);

    return 0;
}
