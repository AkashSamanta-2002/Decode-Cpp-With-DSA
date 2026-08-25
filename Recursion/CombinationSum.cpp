#include<iostream>
#include<vector>
using namespace std;

void combinationSum(int arr[], int n, vector<int>v, int target, int idx){
    if(target==0){
        for(int ele : v){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combinationSum(arr,n,v,target-arr[i],i);
        v.pop_back();
    }
}

int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    vector<int>v;
    combinationSum(arr,n,v,target,0);
    return 0;
}