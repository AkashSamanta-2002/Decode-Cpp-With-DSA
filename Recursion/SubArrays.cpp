#include<iostream>
#include<vector>
using namespace std;

void subarray(int arr[], vector<int> ans, int n, int idx){
    if(idx==n){
        for(int ele : ans) cout<<ele;
        cout<<endl;
        return;
    }

    subarray(arr,ans,n,idx+1);
    if(ans.size()==0 || ans[ans.size()-1]==arr[idx-1]){
        ans.push_back(arr[idx]);
        subarray(arr,ans,n,idx+1);
    } 
}

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // By loop
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<endl;
    //     }
    // }

    // By recursion
    vector<int>v;
    subarray(arr,v,n,0);
    return 0;
}