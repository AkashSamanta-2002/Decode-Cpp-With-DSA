#include<iostream>
#include<vector>
using namespace std;
void remove1(int arr[], int n, vector<int>& v, int idx){
    if(idx==n) return;
    int digit = arr[idx];
    if(digit==1) remove1(arr,n,v,idx+1);
    else{
        v.push_back(digit);
        remove1(arr,n,v,idx+1);
    }
}
int main(){
    int arr[] = {6,2,3,1,3,4,5,1,3,10};
    vector<int>v;
    remove1(arr,10,v,0);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}