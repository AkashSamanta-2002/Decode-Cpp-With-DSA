#include<bits/stdc++.h>
using namespace std;

int ans = 0;

void ratInaMaze(int r, int c, int n, vector<vector<int>>& maze) {
    if(r==n-1 && c==n-1) {
        ans++;
        return;
    }
    
    cout<<"("<<r<<","<<c<<")"<<" ";
    maze[r][c] = 1;
    if(r-1>=0 && maze[r-1][c]==0) ratInaMaze(r-1,c,n,maze);
    if(r+1<n && maze[r+1][c]==0) ratInaMaze(r+1,c,n,maze);
    if(c-1>=0 && maze[r][c-1]==0) ratInaMaze(r,c-1,n,maze);
    if(c+1<n && maze[r][c+1]==0) ratInaMaze(r,c+1,n,maze);
    maze[r][c] = 0;
}

int main(){
    int n = 7;

    // vector<vector<int>> maze = {
    //     {0,1},
    //     {0,0}
    // };

    vector<vector<int>> maze = {
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };

    ratInaMaze(0,0,n,maze);
    
    cout<<ans;
    return 0;
}