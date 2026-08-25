#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
vector<bool> isVisited;
unordered_set<int> isVisitedSet;

void addEdges(int src, int dest, bool isDirected = false) {
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

bool isAnyPathDFS(int currNode, int& src, int& dest) {
    // base case
    if(currNode==dest) return true;
    // Marking current node is visited
    isVisited[currNode] = true;

    for(auto ele: graph[currNode]) {
        if(isVisited[ele]) continue;
        if(isAnyPathDFS(ele, src, dest)) return true;
    }

    return false;
}

bool isAnyPathSetDFS(int curr, int& dest) {
    // Base case
    if(curr==dest) return true;

    // Marking current node as visited 
    isVisitedSet.insert(curr);
    
    for(auto neighbour: graph[curr]) {
        if(isVisitedSet.find(neighbour)==isVisitedSet.end()) {      // or, if(!isVisitedSet.count(neighbour) {
            bool result = isAnyPathSetDFS(neighbour, dest);
            if(result) return true;
        }
    }
    return false;
}

int main() {

    int v, e;
    cin>>v>>e;

    graph.resize(v);
    isVisited.resize(v,false);

    while(e--) {
        int src, dest;
        cin>>src>>dest;
        addEdges(src, dest);
    }
    cout<<endl;
    displayGraph(v);

    cout<< "Enter the src and destination you want to find the path : ";
    int src, dest;
    cin>>src>>dest;

    // cout<<isAnyPathDFS(0, src, dest);
    cout<<isAnyPathSetDFS(0, dest);

    return 0;
}