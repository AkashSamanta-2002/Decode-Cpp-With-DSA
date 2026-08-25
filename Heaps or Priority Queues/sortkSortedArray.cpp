#include<iostream>
#include<queue>
using namespace std;

void sortkSorted(int arr[], int n, int k){
    priority_queue<int,vector<int>,greater<int>> q;
    int idx = 0;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        if(q.size()>k){
            arr[idx++] = q.top();
            q.pop();
        }
    }
    while(q.size()){
        arr[idx++] = q.top();
        q.pop();
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return;
}

int main(){
    int arr[] = {10,9,8,7,4,70,60,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    sortkSorted(arr,n,k);
    
    return 0;
}