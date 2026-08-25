#include<iostream>
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

    int maxrow = -1;
    int maxsum = 0;
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
        if(sum>maxsum){
            maxsum = sum;
            maxrow = i;
        }
    }

    cout<<"The maximum sum row is "<<maxrow<<" and the sum is "<<maxsum;

    return 0;
}