#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
vector<int> merge(vector<int>arr1, vector<int>arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(m+n);
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j]){
            res[k] = arr2[j];
            j++;
        }
        else{
            res[k] = arr1[i];
            k++;
            res[k] = arr1[i];
            i++;
            j++;
        }
        k++;       
    }
    // For remaning

    if(i==n){
        while(j<m){
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    else if(j==m){
        while(i<n){
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main(){

    vector<int> arr1 = {1,4,5,8};
    vector<int> arr2 = {2,3,6,7,10,14,45};

    vector<int> res = merge(arr1,arr2);;
                                            
    

    display(res);

    return 0;
}