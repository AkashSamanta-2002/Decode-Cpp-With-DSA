#include<bits/stdc++.h>
using namespace std;
               
vector< list<int> > graph;

void addEdges(int src, int dest, bool isBidirecional = true) {
    graph[src].push_back(dest);
    if(isBidirecional) graph[dest].push_back(src); 
}

void display(int v) {
    for(int i=0;i<v;i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) cout<<ele<<" -> ";
        cout<<endl;
    }
}

int main() {

    int v, e;
    cout<<"Enter total number of vertex and edges : ";
    cin>>v>>e;

    graph.resize(v);

    //Undirected
    // while(e--) {
    //     int src, dest;
    //     cin>>src>>dest;
    //     addEdges(src,dest);
    // }

    // Directed
    while(e--) {
        int src, dest;
        cin>>src>>dest;
        addEdges(src,dest,false);
    }

    cout<<endl;

    display(v);

    return 0;
}