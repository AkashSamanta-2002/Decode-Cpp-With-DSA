#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[3][3] = {7,5,5,3,6,0,8,4,1};
    int sum = 0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
    }

    cout<<"The second largest element in the matrix is : "<<sum;
    return 0;
}