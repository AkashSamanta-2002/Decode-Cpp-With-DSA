#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& grid, int n, int r, int c, int num) {
    // Checking the row
    for(int i=0;i<n;i++) if(grid[r][i]==num) return false;
    
    // Checking the column
    for(int i=0;i<n;i++) if(grid[i][c]==num) return false;

    // Checking the big shell
    int x = (r/3)*3;    // Finding starting row position of the big shell
    int y = (c/3)*3;    // Finding starting column position of the big shell

    for(int i=x;i<x+3;i++) {
        for(int j=y;j<y+3;j++) {
            if(grid[i][j]==num) return false;
        }
    }

    return true;
}

bool f(vector<vector<int>>& grid, int n, int r, int c) {
    if(r==n) return true;
    if(c==n) return f(grid,n,r+1,0);
    if(grid[r][c]!=-1) return f(grid,n,r,c+1);

    for(int j=1;j<=9;j++) {
        if(isSafe(grid,n,r,c,j)) {
            grid[r][c] = j;
            bool check = f(grid,n,r,c+1);
            if(check) return true;
            grid[r][c] = -1;
        }
    }
    return false;
}

void sudokuSolver(vector<vector<int>>& grid, int n) {
    f(grid,n,0,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<grid[i][j]<<" "; 
        cout<<endl;
    }
}

int main(){
    
    int n = 9;

    vector<vector<int>> grid = {
        {5,3,-1,-1,7,-1,-1,-1,-1},
        {6,-1,-1,1,9,5,-1,-1,-1},
        {-1,9,8,-1,-1,-1,-1,6,-1},
        {8,-1,-1,-1,6,-1,-1,-1,3},
        {4,-1,-1,8,-1,3,-1,-1,1},
        {7,-1,-1,-1,2,-1,-1,-1,6},
        {-1,6,-1,-1,-1,-1,2,8,-1},
        {-1,-1,-1,4,1,9,-1,-1,5},
        {-1,-1,-1,-1,8,-1,-1,7,9}
    };

    sudokuSolver(grid,n);
    
    return 0;
}