#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int i = 0;
    int j = n-1;

    while(i<=j){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]!=0) i++;
        if(arr[j]==0) j--;
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}