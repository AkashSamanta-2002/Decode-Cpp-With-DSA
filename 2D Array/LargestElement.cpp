#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[3][3] = {7,5,5,3,6,0,8,4,1};
    int max = INT_MIN;
    int smax = INT_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                smax = max;
                max = arr[i][j];
            }
        else if(max!=arr[i][j] && arr[i][j]>smax) smax = arr[i][j];
        }
    }

    cout<<"The second largest element in the matrix is : "<<smax;
    return 0;
}