#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

int arrayInsertion(int arr[], int n, int idx, int ele){
    for(int i=n-1;i>=idx;i--){
        arr[i+1] = arr[i];
    }
    display(arr,10);
    arr[idx] = ele;
    n++;
    return n;
}

int sortedArrayInsertion(int arr[], int n, int ele){
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i]>ele) idx = i-1;
    }
    for(int i=n-1;i>=idx;i--){
        arr[i+1] = arr[i];
    }
    display(arr,n);
    arr[idx] = ele;
    n++;
    return n;
}

int main(){
    int arr[100] = {1,2,3,5,6};
    int n = 5;
    //int idx = 3;
    int ele = 4;

    display(arr,n);

    n = sortedArrayInsertion(arr,n,ele);
    
    display(arr,n);

    return 0;
}