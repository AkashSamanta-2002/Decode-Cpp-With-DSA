#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    // Brute Force

    // int maxsum = INT_MIN;
    // for(int i=0;i<n-k;i++){
    //     int currsum = 0;
    //     for(int j=i;j<=i+k-1;j++) currsum += arr[j];
    //     if(subsum>maxsum) maxsum = subsum;
    // }

    // Sliding Window

    int i = 1;
    int j = k;
    int maxsum;
    int prevsum = 0;
    int maxIdx = -1;

    for(int i=0;i<k;i++){
        prevsum += arr[i];
        maxsum = prevsum;
        maxIdx = 0;
    }
    while(j<n){
        int currsum = prevsum + arr[j] - arr[i-1];
        if(currsum>maxsum){
            maxsum = currsum;
            maxIdx = i;
        }
        prevsum = currsum;
        i++;
        j++;
    }

    cout<<"The maximum sum of subarray having size "<<k<<" is : "<<maxsum<<endl<<"The starting index of that subarray is : "<<maxIdx;
    return 0;
}