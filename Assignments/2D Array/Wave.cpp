#include<iostream>
using namespace std;

int main(){
    int r, c;
    cout<<"Enter size of row and column : ";
    cin>>r>>c;

    int arr[r][c];

    cout<<"Enter all elements : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin>>arr[i][j];
    }
    cout<<endl;

    // Wave Print
    for(int j=0;j<c;j++){
        if(j%2==0) for(int i=r-1;i>=0;i--) cout<<arr[i][j]<<" "; 
        else for(int i=0;i<r;i++) cout<<arr[i][j]<<" ";
    }
    return 0;
}