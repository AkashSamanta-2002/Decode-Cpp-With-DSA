#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter 1st matrix row : ";
    cin>>m;

    cout<<"Enter 1st matrix column and 2nd matrix row : ";
    cin>>n;

    int p;
    cout<<"Enter 2nd matrix column : ";
    cin>>p;

    int matrix1[m][n];
    int matrix2[n][p];

    cout<<"Enter 1st matrix elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter 2nd matrix elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cin>>matrix2[i][j];
        }
    }

    int res[m][p];

    // Multiplication
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            res[i][j] = 0;
            // Multiplication algorithm
            for(int k=0;k<n;k++){
                res[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout<<endl;
    // Printing resultant matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}