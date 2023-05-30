#include <bits/stdc++.h>
using namespace std;

void bfs(map<int, list<int>> &adj,int n,int m,int i){
    vector<int> vis(n,0);
    queue<int> q;
    q.push(i); // Enqueue i for exploration
    vis[i] = 1; // i is the starting point
    cout<<i<<" ";
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto i:adj[node])
        {
            if (vis[i] == 0)
            {
                // If connected & not in visited list
                cout<<i<<" ";
                q.push(i);
                vis[i] = 1;
            }
        }
    }
}


void displaySimple(map<int,list<int>> adj){
    for (auto pair : adj)
    {
        cout<<pair.first<<"->";
        for (auto i:pair.second){
            cout << " " << i;
        }
        cout << endl;
    }
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
    cout<<"BFS is"<<endl;
    bfs(adj,n,m,i);
    // Time Complexity: O(V^2) when Adjacency Matrix is used and O(V + 2E) when Adjacency List is used
    // V=Vertex, E=Edges
    return 0;
}
