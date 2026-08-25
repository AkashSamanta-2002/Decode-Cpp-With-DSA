#include<iostream>
using namespace std;

int main(){
    int arr[8] = {6,3,2,4,1,7,1,5};
    int n = 8;
    int sum_arr = 0;

    for(int i=0;i<n;i++){
        sum_arr += arr[i];
    }
    int x = n - 1;
    int sum = x * (( x + 1 ) / 2);

    int duplicate = sum_arr - sum;

    cout<<"The duplicate element is : "<<duplicate;
    return 0;
}
