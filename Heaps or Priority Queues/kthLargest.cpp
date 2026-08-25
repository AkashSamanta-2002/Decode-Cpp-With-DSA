#include<iostream>
#include<queue>
using namespace std;

int kthlargset(int arr[], int n, int k){
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        if(q.size()>k) q.pop();
    }
    return q.top();
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter k : ";
    cin>>k;

    int ans = kthlargset(arr,n,k);
    cout<<"The kth largest number is : "<<ans;

    return 0;
}