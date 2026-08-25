#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int x;
    cout<<"Enter the element : ";
    cin>>x;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<"The elements are "<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
                } 
            }
        }
    }
    return 0;
}