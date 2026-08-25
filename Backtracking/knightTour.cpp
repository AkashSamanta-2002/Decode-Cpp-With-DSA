#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& board, int i, int j) { 
    return (i>=0 and j>=0 and i<board.size() and j<board.size() and board[i][j]==-1);
}

void display(vector<vector<int>>& board) {
    int n = board.size();
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<board[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

vector<int> dx = {-1, -2, -2, -1, +1, +2, +2, +1};
vector<int> dy = {-2, -1, +1, +2, +2, +1, -1, -2};

void knightTour(vector<vector<int>>& board, int i, int j, int step) {
    int n = board.size();
    if(step==n*n) {
        board[i][j] = step;
        display(board);
        board[i][j] = -1;
    }

    
    for(int k=0;k<8;k++) {
        if(isSafe(board, i + dx[k], j + dy[k])) {
            board[i][j] = step;
            knightTour(board, i + dx[k], j + dy[k], step+1);
            board[i][j] = -1;
        }
    }

}

int main(){
    int n = 5;
    vector<vector<int>> board(n, vector<int>(n,-1));

    knightTour(board,0,0,1);

    return 0;
} 