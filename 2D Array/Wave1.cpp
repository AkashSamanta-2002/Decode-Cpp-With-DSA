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

    // Wave matrix form in place

    // for(int i=0;i<n;i++){
    //     if(i%2!=0){
    //         int a = 0;
    //         int b = n-1;
    //         while(a<b){
    //             swap(matrix[i][a],matrix[i][b]);
    //             a++;
    //             b--;
    //         }
    //     }            
    // }
    
    // // Printing
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    // }

    // Printing
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }

    return 0;
}