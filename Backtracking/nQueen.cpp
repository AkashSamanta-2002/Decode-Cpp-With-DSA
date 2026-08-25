#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;

bool canplaceQueen(int r, int c, int n) {
    // check column
    for(int i=r-1;i>=0;i--) {
        if(grid[i][c]=='Q') return false;
    }

    // check left diagonal
    for(int i=r-1, j=c-1; i>=0 && j>=0; i--, j--){
        if(grid[i][j]=='Q') return false;
    }

    // check left diagonal
    for(int i=r-1, j=c+1; i>=0 && j<n; i--, j++){
        if(grid[i][j]=='Q') return false;
    }

    return true;
}
 
void nqueen(int row, int n){
    if(row==n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }

    for(int col=0;col<n;col++) {
        if(canplaceQueen(row, col, n)){
            grid[row][col] = 'Q';
            nqueen(row+1, n);
            grid[row][col] = '.';
        }
    }
}

int main(){
    int n = 4;
    grid.resize(n, vector<char>(n, '.'));
    nqueen(0, n);
    return 0;
}