#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, vector<int>& brr, vector<int>& ans){
    int i=0;            
    int j=0;           
    int k=0;           
                
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

    // vector<int> left;
    // vector<int> right;
    
    // for(int i=0;i<n;i++){
    //     if(i<n/2) left.push_back(v[i]);
    //     else right.push_back(v[i]);
    // }

    // 5,1,2,3,5,6,3,0,4,9,6
    int n1 = n/2, n2 = n - n1;
    vector<int> left(n1), right(n2);
    for(int i=0;i<n1;i++){  
        left[i] = v[i];     // 5 1 2 3 5 
    }

    for(int i=0;i<n2;i++){
        right[i] = v[n1+i]; // 6 3 0 4 9 6
    }

    mergeSort(left);
    mergeSort(right);

    merge(left,right,v);
    left.clear();
    right.clear();
}

int main(){
    int arr[] = {5,4,3,2,1,5,6,4,2,1,8,9,6,3,3,3,2,5,4,10,12,13,15,1,6,14,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    vector<int> v(arr,arr+n);
    for(int ele : v)  cout<<ele<<" ";
    cout<<endl;

    mergeSort(v);

    for(int ele : v)  cout<<ele<<" ";
    return 0;
}