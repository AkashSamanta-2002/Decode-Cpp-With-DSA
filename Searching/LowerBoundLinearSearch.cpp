#include<iostream>
using namespace std;
int lowerbound(int arr[], int n, int x){
    if(arr[0]>x) return -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x) return arr[i-1];
        if(arr[i]>x) return arr[i-1];
    }
}
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int x = 21;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = lowerbound(arr,size,x);
    cout<<"The lower bound is : "<<ans;
    return 0;
}