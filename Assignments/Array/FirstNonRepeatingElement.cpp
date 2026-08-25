#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    int ans = 0;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
            ans = arr[i];
            break;
        } 
    }
    cout<<"The first non repeating element is : "<<ans;
    return 0;
}


// #include <iostream>
// using namespace std;
// int main() {
// int arr[5]={1,1,2,2,3};
// int n=5;
// for (int i = 0; i < n; i++) {
// int j;
// // Checking if ith element is present in array
// for (j = 0; j < n; j++)
// if (i != j && arr[i] == arr[j])break;
// if (j == n){
// cout<<arr[i];
// return 0;
// }
// }
// return 0;
// }