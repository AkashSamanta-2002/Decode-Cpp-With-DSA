#include<bits/stdc++.h>
using namespace std;

int unique_paths(int sr, int sc, int er, int ec) {
    if(sr == er && sc == ec) return 1;
    if(sr > er || sc > ec) return 0;    

    // if(dp[sr][sc] != -1) return dp[sr][sc]; 
    return unique_paths(sr+1, sc, er, ec) + unique_paths(sr, sc+1, er, ec);
}

int main() {
    int m, n;
    cin>>m>>n;

    int x;
    cin>>x;
    vector<vector<int>> check_points(x);
    for(int i=0; i<x; i++) {
        int r, c;
        cin>>r>>c;

        check_points[i] = {r, c};
        
        // check_points[i].push_back(r);
        // check_points[i].push_back(c);
    }

    vector<vector<int>> dp(m, vector<int>(n, -1));

    int up = 1;
    int sr = 0, sc = 0, er, ec;
    for(int i=0; i<x; i++) {
        er = check_points[i][0];
        ec = check_points[i][1];

        up *= unique_paths(sr, sc, er, ec);
        
        sr = check_points[i][0];
        sc = check_points[i][1];
    }

    up *= unique_paths(sr, sc, m-1, n-1);
    
    cout<<up<<endl;

    return 0;
}