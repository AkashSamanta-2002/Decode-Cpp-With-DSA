#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    // Brute force           T.C => O(n*k)
    // int now = n - k + 1;    // No. of window
    // int ans[n-k+1];
    // for(int i=0;i<=now;i++){
    //     ans[i] = 0;
    //     for(int j=i;j<=k+i-1;j++){
    //         if(arr[j]<0){
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    // Method-2 Using Queue     T.C => O(n)
    vector<int> ans;

    // Filling the queue
    queue<int> q;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    
    // Filling the answer
    for(int i=0;i<n-k+1;i++){
        while(q.size()!=0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
    }

    for(int ele: ans) cout<<ele<<" ";
    return 0;
}