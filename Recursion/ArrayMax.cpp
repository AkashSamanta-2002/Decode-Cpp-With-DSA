#include<iostream>
#include<climits>
using namespace std;
void ArrayMax(int arr[], int n, int idx, int max){
    if(n==idx){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    ArrayMax(arr,n,idx+1,max);
}
int MaxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],MaxInArray(arr,n,idx+1));
}
int main(){
    int arr[] = {1,2,4,6,7,42,1,3,4,43,6,74,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    //ArrayMax(arr,size,0,INT_MIN);
    cout<<MaxInArray(arr,size,0);
    return 0;
}