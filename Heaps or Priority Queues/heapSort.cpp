#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[] = {10,1,2,20,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int ele : arr) pq.push(ele);
    for(int i=0;pq.size();i++){
        arr[i] = pq.top();
        pq.pop();
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}