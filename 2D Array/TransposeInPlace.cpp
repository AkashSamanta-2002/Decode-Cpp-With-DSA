#include<iostream>
using namespace std;
void display(int arr[], int size){

}
int main(){
    int n;
    cout<<"Enter row and column size : ";
    cin>>n;
    int matrix[n][n];

    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j>i) swap(matrix[i][j],matrix[j][i]); 
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]); 
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}