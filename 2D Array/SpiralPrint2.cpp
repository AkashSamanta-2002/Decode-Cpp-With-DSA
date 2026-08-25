#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row and column size : ";
    cin>>n;
    int matrix[n][n];

    int minr = 0, maxr = n-1;
    int minc = 0, maxc = n-1;

    int te = n * n;
    int count = 1;
    while(maxr>=minr && maxc>=minc){
        // Right
        for(int j=minc;j<=maxc && count<=te;j++){
            matrix[minr][j] = count;
            count++;
        }
        minr++;
        // Down
        for(int i=minr;i<=maxr && count<=te;i++){
            matrix[i][maxc] = count;
            count++;
        }
        maxc--;
        // Left
        for(int j=maxc;j>=minc && count<=te;j--){
            matrix[maxr][j] = count;
            count++;
        }
        maxr--;
        // Top
        for(int i=maxr;i>=minr && count<=te;i--){
            matrix[i][minc] = count;
            count++;
        }
        minc++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}