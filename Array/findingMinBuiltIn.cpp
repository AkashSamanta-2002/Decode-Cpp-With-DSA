#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,-3,6,8,1,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int* min = min_element(arr,arr+n);

    cout<<*min;

    return 0;
}