#include<iostream>
using namespace std;
bool duplicate(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j) return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(duplicate(arr,n)) cout<<"Duplicate element present in the array";
    else cout<<"Duplicate element is not present in the array";
    return 0;
}