#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

int arrayDeletion(int arr[], int n, int idx){
    for(int i=idx;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    return n;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int idx = 2;

    display(arr,n);

    n = arrayDeletion(arr,n,idx);

    display(arr,n);

    return 0;
}