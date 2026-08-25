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
    int r1,c1;
    int r2,c2;

    cout<<"Enter starting row and column index : ";
    cin>>r1>>c1;
    cout<<"Enter ending row and column index : ";
    cin>>r2>>c2;

    int sum = 0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++) sum += arr[i][j];
    }

    cout<<"The sum is : "<<sum;
    return 0;
}