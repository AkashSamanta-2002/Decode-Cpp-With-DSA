#include<iostream>
using namespace std;

void cyclicSort(int arr[], int n){
    int i=0;
    while(i<n){
        int correctIdx = arr[i] - 1;
        if(i==correctIdx) i++;
        else swap(arr[i], arr[correctIdx]);
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of thr array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    cyclicSort(arr,n);

    for(int ele : arr) cout<<ele<<" ";
    return 0;
}