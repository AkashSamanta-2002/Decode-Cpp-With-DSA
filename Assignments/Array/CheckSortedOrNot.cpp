#include<iostream>
using namespace std;
bool sortdeornot(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        if(temp>arr[i]) return false;
        else temp = arr[i];
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    if(sortdeornot(arr,n)) cout<<"The array is sorted ";
    else cout<<"The array is not sorted";

    return 0;
}