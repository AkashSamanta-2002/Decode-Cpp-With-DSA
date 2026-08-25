#include<iostream>
#include<vector>
using namespace std;
void displayarray(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    displayarray(arr,n,idx+1);
}
void displayvector(vector<int>& v, int idx){
    int n = v.size();
    if(idx==n) return;
    cout<<v[idx]<<" ";
    displayvector(v,idx+1);
}
int main(){
    int arr[] ={1,2,3,4,5,6,8,9,10};
    vector<int> v = {1,2,3,4,5,6,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayarray(arr,size,0); 
    cout<<endl;
    displayvector(v,0);
    return 0;
}