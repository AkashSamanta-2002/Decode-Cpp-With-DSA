#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of row and columns : ";
    cin>>n;

    int arr[n][n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        // for(int k=0;k<n/2;k++){
        //    if(i!=n/2) cout<<"  ";
        // }
        for(int j=0;j<n;j++){
            if(n/2 == i || n/2 == j) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}