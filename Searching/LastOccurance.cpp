#include<iostream>
using namespace std;

int main(){
        int arr[] = {2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int lo = 0;
    int hi = size - 1;
    int x = 2;
    bool flag = false;

    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==x){
            if(arr[mid+1]==x) lo = mid + 1;
            else{
                cout<<mid;
                flag = true; 
                break;
            } 
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<-1;
    return 0;
}