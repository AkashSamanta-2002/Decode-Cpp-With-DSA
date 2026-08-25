#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter row and column size : ";
    cin>>r>>c;
    int matrix[r][c];

    cout<<"Enter the matrix elements : ";

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         cout<<matrix[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int trans[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            trans[i][j] = matrix[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}                                                           