#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);    // Right
    int downWays = maze(sr+1,sc,er,ec);     // Down
    return rightWays + downWays;
}

int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row,col-1);   // Right
    int downWays = maze2(row-1,col);    // Down
    return rightWays + downWays;
}

void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    } 
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');
}

void printPath2(int row, int col, string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    } 
    printPath2(row,col-1,s+'R'); // Right
    printPath2(row-1,col,s+'D'); // Down
}

int main(){
    //cout<<maze(1,1,5,5);
    printPath(1,1,3,3,"");
    //cout<<maze2(5,5);
    cout<<endl;
    printPath2(3,3,"");
    return 0;
}