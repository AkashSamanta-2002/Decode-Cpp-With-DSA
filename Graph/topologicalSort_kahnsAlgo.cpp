#include<bits/stdc++.h>
using namespace std;

int v, e;
vector< list<int> >graph;

void addEdge(int src, int dest, bool isBidirectional = false) {
    graph[src].push_back(dest);
    if(isBidirectional) graph[dest].push_back(src);
}

// void display() {
//     for(int i=0; i<v; i++) {
//         cout<<i<<" -> ";
//         for(auto ele : graph[i]) cout<<ele<<" -> ";
//         cout<<endl;
//     }
// }

void topological_sort() {
    // kahn's algo
    vector<int> indegree(v, 0);
    for(int i=0; i<v; i++) {
        for(auto neighbour: graph[i]) {
            indegree[neighbour]++;
        }
    }

    queue<int> q;
    unordered_set<int> vis;

    for(int i=0; i<v; i++) {
        if(indegree[i] == 0) {
            q.push(i);
            vis.insert(i);
        }
    }

    while(!q.empty()) {
        int curr_node = q.front();
        q.pop();
        cout<<curr_node<<" ";

        for(auto neighbour: graph[curr_node]) {
            if(!vis.count(neighbour)) {
                indegree[neighbour]--;
                if(indegree[neighbour] == 0) {
                    q.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}

int main() {
    cin>>v>>e;

    graph.resize(v);

    while(e--) {
        int src, dest;
        cin>>src>>dest;
        addEdge(src, dest);
    }

    cout<<endl;
    // display();
    topological_sort();

    return 0;
}