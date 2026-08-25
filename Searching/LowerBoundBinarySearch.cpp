#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int x = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    int lo = 0;
    int hi = size - 1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            flag = true;
            break;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<arr[hi];
    return 0;
}