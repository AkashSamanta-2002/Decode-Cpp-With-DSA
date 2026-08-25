#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of row and column : ";
    cin>>n;

    int arr[n][n];

    cout<<"Enter all elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    cout<<endl;

    // Transpose

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) swap(arr[i][j],arr[j][i]); 
    }

    // Rotate

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++) swap(arr[i][j],arr[n-1-i][j]); 
    }

    // Print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; 
        cout<<endl;
    }
    return 0;
}