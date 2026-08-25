#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=1;i<n;i++) arr[i] += arr[i-1];

    for(int ele : arr) cout<<ele<<" ";
    return 0;
}