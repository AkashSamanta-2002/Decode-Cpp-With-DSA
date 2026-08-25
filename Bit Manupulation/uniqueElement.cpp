#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,2,4,3,2,101,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;

    for(int i=0;i<n;i++) res = res ^ arr[i];

    cout<<"The unique element in the array is : "<<res;
    return 0;
}