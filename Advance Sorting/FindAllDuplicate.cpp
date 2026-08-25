#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> allDuplicate(int arr[], int n){
    int i = 0;
    while(i<n){
        int correctIdx = arr[i] - 1;
        if(arr[i]==arr[correctIdx]) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1) ans.push_back(arr[i]);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> ans = allDuplicate(arr,n);
    sort(ans.begin(),ans.end());

    for(int ele : ans) cout<<ele<<" ";
    return 0;
}