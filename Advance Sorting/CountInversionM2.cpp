#include<iostream>
#include<vector>
using namespace std;

int count = 0;

void merge(vector<int>& arr, vector<int>& brr, vector<int>& ans){
    int i=0, j=0, k=0;

    while(i<arr.size() && j<brr.size()){
        if(arr[i]<brr[j]) ans[k++] = arr[i++];
        else if(arr[i]>brr[j]) ans[k++] = brr[j++];
        else{
            ans[k++] = arr[i++];
            ans[k++] = brr[j++];
        }
    }
    while(i<arr.size()) ans[k++] = arr[i++];
    while(j<brr.size()) ans[k++] = brr[j++];
}

void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;

    vector<int> left;
    vector<int> right;
    
    for(int i=0;i<n;i++){
        if(i<n/2) left.push_back(v[i]);
        else right.push_back(v[i]);
    }

    mergeSort(left);
    mergeSort(right);

    merge(left,right,v);
    left.clear();
    right.clear();
}

int main(){
    int arr[] = {5,1,2,3,5,6,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int ele : v)  cout<<ele<<" ";
    cout<<endl;

    mergeSort(v);

    for(int ele : v)  cout<<ele<<" ";
    cout<<endl<<count;
    return 0;
}