#include <bits/stdc++.h>
using namespace std;

// i -- Where we want to start
// Time Complexity: O(V^2) when Adjacency Matrix is used and (V + 2E) when Adjacency List is used
// V=Vertex, E=Edges
void dfsOfGraph(vector<vector<int>> &graph,vector<int> &vis,int i)
{
    vis[i] = 1;
    cout<<i<<" ";
    for (int j = 0; j < graph[i].size(); j++)
    {
        if (graph[i][j] == 1 && vis[j]== 0)
        // If connected & not in visited list
        {
            dfsOfGraph(graph,vis,j);
        }
    }
}

void dfs(vector<vector<int>> &graph,int i){
    vector<int> vis(graph.size(),0);
    dfsOfGraph(graph,vis,i);
}

int main()
{
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
   
    dfs(graph,i);
    
    return 0;
}
