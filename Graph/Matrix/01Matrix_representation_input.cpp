#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> vect){
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }    
        cout << endl;
    }
}


void simpleGraph(vector<vector<int>> &graph,int n,int m){
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
}

void weightedGraph(vector<vector<int>> &graph,int n,int m){
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w;
    }
}
int main()
{
    int n,m;
    cout<<"Enter no of nodes for simple"<<endl;
    cin>>n;
    cout<<"Enter no of edges for simple"<<endl;
    cin>>m;

     // For 0 based Indexing
    vector<vector<int>> graph(n,vector<int> (m, 0));
    simpleGraph(graph,n,m);
    cout<<"Simple Graph"<<endl;
    display(graph);

    // For 1 based Indexing
    // vector<vector<int>> graph(n+1,vector<int> (m+1, 0));


    cout<<"Enter no of nodes for weighted"<<endl;
    cin>>n;
    cout<<"Enter no of edges for weighted"<<endl;
    cin>>m;

    vector<vector<int>> wgraph(n,vector<int> (m, 0));
    weightedGraph(wgraph,n,m);
    cout<<"Weighed Graph"<<endl;
    display(wgraph);
    return 0;
}
