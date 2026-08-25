#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
unordered_set<int> isVisited;
vector<int> dist;

void addEdge(int src, int dest, bool isDirected = false) {
    graph[src].push_back(dest);
    if(!isDirected) graph[dest].push_back(src);
}

void displayGraph(int v) {
    for(int i=0;i<v;i++) {
        cout<<i<<" : ";
        for(auto ele : graph[i]) cout<<ele<<" -> ";
        cout<<endl;
    }
}

void shortestDistanceBFS(int src) {
    queue<int> q;

    q.push(src);
    isVisited.insert(src);

    while(not q.empty()) {
        int curr = q.front();
        q.pop();

        for(auto neighbour: graph[curr]) {
            if(!isVisited.count(neighbour)) {
                q.push(neighbour);
                dist[neighbour] = dist[curr] + 1;
                isVisited.insert(neighbour);
            }
        }
    }
}

int main() {
    int v, e;
    cin>>v>>e;
    graph.resize(v, list<int> ());
    dist.resize(v, INT_MAX);
    dist[0] = 0;

    // Build Graph
    while(e--) {
        int src, dest;
        cin>>src>>dest;

        addEdge(src, dest);
    }   

    cout<<endl;
    displayGraph(v);

    int src;
    cin>>src;
    shortestDistanceBFS(src);

    for(int ele: dist) cout<<ele<<" ";

    return 0;
}