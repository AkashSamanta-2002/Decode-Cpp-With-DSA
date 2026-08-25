#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
unordered_set<int> isVisited;
vector<vector<int>> allPaths;

void addEdge(int src, int dest, bool isDirected = false) {
    graph[src].push_back(dest);
    if(!isDirected) graph[dest].push_back(src);
}

void findAllPathDFS(int curr, int& dest, vector<int> temp) {
    if(curr==dest) {
        temp.push_back(curr);
        allPaths.push_back(temp);
        return;
    }

    // Mark as visited
    isVisited.insert(curr);
    // push curr into temp vector 
    temp.push_back(curr);

    // Go to all neighbours and explore
    for(auto neighbour: graph[curr]) {
        // Check if alredy visited or not
        if(!isVisited.count(neighbour)) {
            findAllPathDFS(neighbour, dest, temp);
        } 
    }
    
    isVisited.erase(curr);
    temp.pop_back();
}

void displayGraph(int v) {
    for(int i=0;i<v;i++) {
        cout<<i<<" : ";
        for(auto ele : graph[i]) cout<<ele<<" -> ";
        cout<<endl;
    }
}

void displayAllPaths() {
    for(auto path: allPaths) {
        for(auto ele: path) cout<<ele<<" -> ";
        cout<<endl;
    }
}

int main() {
    int v, e;
    cin>>v>>e;
    graph.resize(v, list<int> ());


    // Build Graph
    while(e--) {
        int src, dest;
        cin>>src>>dest;

        addEdge(src, dest);
    }   

    displayGraph(v);

    // Enter source and destination
    int src, dest;
    cout<<"Enter the source and destination you want to find the path: ";
    cin>>src>>dest; 
    
    vector<int> temp;
    findAllPathDFS(src, dest, temp);

    displayAllPaths();    

    return 0;
}