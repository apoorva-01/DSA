#include <bits/stdc++.h>
using namespace std;

void displaySimple(map<int,list<int>> adj){
    for (auto pair : adj)
    {
        cout<<pair.first<<"->";
        // for (auto it = pair.second.begin(); it != pair.second.end(); ++it){
        //     cout << " " << *it;
        // }
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


void displayWeighted(map<int, list<pair<int,int>>> adj){
    for (auto pair : adj)
    {
        cout<<pair.first<<"->";
        for (auto it = pair.second.begin(); it != pair.second.end(); ++it){
            cout << " {" << (*it).first<<" w="<<(*it).second<<"}";
        }
        cout << endl;
    }
}
void weightedGraph(map<int, list<pair<int,int>>> &adj,int n,int m){
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[v].push_back({u,w});
        adj[u].push_back({v,w});
    }
}

int main()
{
    int n,m;


    cout<<"Enter no of nodes for simple"<<endl;
    cin>>n;
    cout<<"Enter no of edges for simple"<<endl;
    cin>>m;
    map<int, list<int>> adj;
    simpleGraph(adj,n,m);
    cout<<"Simple Graph"<<endl;
    displaySimple(adj);


    cout<<"Enter no of nodes for weighted"<<endl;
    cin>>n;
    cout<<"Enter no of edges for weighted"<<endl;
    cin>>m;
    map<int, list<pair<int,int>>> wgraph;
    weightedGraph(wgraph,n,m);
    cout<<"Weighed Graph"<<endl;
    displayWeighted(wgraph);
    return 0;
}
