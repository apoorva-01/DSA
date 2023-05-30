#include <bits/stdc++.h>
using namespace std;

void dfsOfGraph(map<int, list<int>> &adj,vector<int> &vis,int i){
    vis[i] = 1; // i is the starting point
    cout<<i<<" ";
    for (auto x:adj[i])
    {
        if(vis[x] == 0)
        {
            dfsOfGraph(adj,vis,x);      
        }
    }
}

void dfs(map<int, list<int>> &adj,int i){
    vector<int> vis(adj.size(),0);
    dfsOfGraph(adj,vis,i);
}



void simpleGraph(map<int,list<int>> &adj,int n,int m){
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
}


int main()
{
    int n,m,i;

    cout<<"Enter no of nodes for simple"<<endl;
    cin>>n;
    cout<<"Enter no of edges for simple"<<endl;
    cin>>m;
    cout<<"Enter Starting Node Number"<<endl;
    cin>>i;
   
    map<int, list<int>> adj;
    simpleGraph(adj,n,m);
    cout<<"DFS is"<<endl;
    

    dfs(adj,i);
// Time Complexity: O(V^2) when Adjacency Matrix is used and (V + 2E) when Adjacency List is used
// V=Vertex, E=Edges
    return 0;
}
