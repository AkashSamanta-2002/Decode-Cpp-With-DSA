#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,9,15,18,21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int lo = 0;
    int hi = size - 1;
    int target = 9;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo + hi) / 2;

        if(arr[mid] == target){
            cout<<"The element is preaent in index : "<<mid;
            flag = true;
            break;
        }
        else if(arr[mid]>target) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == false) cout<<"Element is not present";
    return 0;
}