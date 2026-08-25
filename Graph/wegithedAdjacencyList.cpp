#include<bits/stdc++.h>
using namespace std;
               
vector< list< pair<int,int> > > graph;

void addEdges(int src, int dest, int wt, bool isBidirecional = true) {
    graph[src].push_back({dest, wt});
    if(isBidirecional) graph[dest].push_back({src, wt}); 
}

void display(int v) {
    for(int i=0;i<v;i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) cout<<"("<<ele.first<<","<<ele.second<<")"<<" -> ";
        cout<<endl;
    }
}

int main() {

    int v, e;
    cout<<"Enter total number of vertex and edges : ";
    cin>>v>>e;

    graph.resize(v);

    // Undirected
    while(e--) {
        int src, dest, wt;
        cin>>src>>dest>>wt;
        addEdges(src,dest,wt);
    }

    // Directed
    // while(e--) {
    //     int src, dest;
    //     cin>>src>>dest;
    //     addEdges(src,dest,false);
    // }

    cout<<endl;

    display(v);

    return 0;
}