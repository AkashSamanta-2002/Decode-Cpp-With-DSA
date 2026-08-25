#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element : ";
    cin>>x;
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }

    cout<<count<<" elements are greater than "<<x;
    return 0;
}