#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,6,5,4,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Method 1
    // for(int i=1;i<n;i++){
    //     for(int j=i;j>=1;j--){
    //         if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
    //         else break;
    //     }
    // }

    // Method 2

    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    for(int ele : arr) cout<<ele<<" ";
    return 0;
}