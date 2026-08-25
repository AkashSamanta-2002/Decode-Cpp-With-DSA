#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row and column size : ";
    cin>>n;
    int matrix[n][n];

    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    
    // Printing
    for(int i=0;i<n;i++){           // Column constant and row varies in this case 
        if(i%2==0){                 // Thus we se outer loop on column and inner loop on row -> matrix[inner][outer]
            for(int j=0;j<n;j++){
                cout<<matrix[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<matrix[j][i]<<" ";
            }
        }
    }

    return 0;
}