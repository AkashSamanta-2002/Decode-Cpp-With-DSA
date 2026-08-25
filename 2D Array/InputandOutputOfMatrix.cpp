#include<iostream>
using namespace std;

int main(){
    int r = 3, c = 3;
    int arr[r][c];

    cout<<"Enter the elements : ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}