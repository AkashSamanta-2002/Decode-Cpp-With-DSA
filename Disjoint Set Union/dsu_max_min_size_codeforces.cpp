#include<bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> Rank;
vector<int> size;
vector<int> minimal;
vector<int> maximal;

int find(int n) {
    if(n == par[n]) return n;
    return par[n] = find(par[n]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);

    if(a == b) return;

    if(Rank[a] >= Rank[b]) {
        par[b] = a;
        Rank[a]++;
        size[a] += size[b];

        minimal[a] = min(minimal[a], minimal[b]);
        maximal[a] = max(maximal[a], maximal[b]);
        
    } else {
        par[a] = b;
        Rank[b]++;
        size[b] += size[a];
        
        minimal[b] = min(minimal[a], minimal[b]);
        maximal[b] = max(maximal[a], maximal[b]);
    }
}

int main() {
    // n -> number of elementsm, m-> number of queries
    int n, m;
    cin>>n>>m;

    par.resize(n+1);
    minimal.resize(n+1);
    maximal.resize(n+1);
    for(int i=1; i<=n; i++) {
        par[i] = minimal[i] = maximal[i] = i;
    }
    
    size.resize(n+1, 1);
    Rank.resize(n+1, 1);

    while(m--) {
        string str;
        cin>>str;

        if(str == "union") {
            int a, b;
            cin>>a>>b;

            Union(a, b);
        } else {
            int x;
            cin>>x;

            x = find(x);

            cout<<minimal[x]<<" "<<maximal[x]<<" "<<size[x]<<endl;
        }
    }

    return 0;
}