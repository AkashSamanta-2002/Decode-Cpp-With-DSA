#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;

void addEdges(int src, int dest, bool isBidirecional = true) {
    graph[src].push_back(dest);
    if(isBidirecional) graph[dest].push_back(src); 
}

void dfs(int node, unordered_set<int>& visited) {
    visited.insert(node);

    for(auto neighbour: graph[node]) {
        if(!visited.count(neighbour)) {
            dfs(neighbour, visited);
        }
    }
}

int connected_component(int v) {
    int result = 0;
    // make dfs call for every node

    unordered_set<int> visited;
    for(int i=0;i<v;i++) {
        if(!visited.count(i)) {
            dfs(i, visited);
            result++;
        }
    }
    return result;
}

int main() {
    
    int v, e;
    cout<<"Enter total number of vertex and edges : ";
    cin>>v>>e;

    graph.resize(v);

    //Undirected
    while(e--) {
        int src, dest;
        cin>>src>>dest;
        addEdges(src,dest);
    }

    cout<<endl;

    int connectedComponents = connected_component(v);
    cout<<"Number of connected components in the graph is: "<<connectedComponents;

    return 0;
}