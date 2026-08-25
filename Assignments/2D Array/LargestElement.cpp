#include<iostream>
#include<climits>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter size of row and columns : ";
    cin>>r>>c;

    int arr[r][c];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    int max = INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max) max = arr[i][j];
        }
    }

    cout<<"The max element in the array is : "<<max;
    return 0;
}