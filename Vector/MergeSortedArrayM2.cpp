#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m-1;    // -1            
        int j = n-1;    // 0                                     
        int k = m+n-1;  // 1    
        
        while(i>=0 && j>=0){           // i = -1, j = 0, k = 0;        2 2 
            if(nums1[i]>nums2[j]){      // 2 0           1
                nums1[k] = nums1[i];
                i--;
            }
            else if(nums1[i]<nums2[j]){
                nums1[k] = nums2[j];
                j--;
            }
            else{
                nums1[k] = nums1[i];
                k--;
                nums1[k] = nums1[i];
                i--;
                j--;
            }
            k--;
        }
        if(i<0){
            while(j>=0){
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        else if(j<0){                   // i = -1, j = 3, k = 3         0,0,0,0,5
            while(i>=0){                // 0,0,0,0,0     1,2,3,4,5
                nums1[k] = nums1[i];
                k--;
                i--;
            }
        }
        return;
    }
int main(){

    vector<int> arr1 = {0,0,0,0,0};
    vector<int> arr2 = {1,2,3,4,5};

    merge(arr1,0,arr2,5);
                                            
    

    display(arr1);

    return 0;
}