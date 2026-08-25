#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minidx = j;
            } 
        }
        swap(arr[i],arr[minidx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}