#include<bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> Rank;

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
    } else {
        par[a] = b;
        Rank[b]++;
    }
}

int main() {
    // n -> number of elementsm, m-> number of queries
    int n, m;
    cin>>n>>m;

    par.resize(n+1);
    for(int i=1; i<=n; i++) {
        par[i] = i;
    }

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

            cout<<find(x)<<endl;
        }
    }

    return 0;
}