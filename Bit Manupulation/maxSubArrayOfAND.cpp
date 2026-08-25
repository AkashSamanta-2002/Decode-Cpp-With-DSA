#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {12,3,1,6,16,1,16,7,3,8,13,13,13,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxEle = INT_MIN;
    int count = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxEle){
            maxEle = arr[i];
            count = 1;
            ans = 1;
        }
        else if(arr[i]<maxEle){
            count = 1;
        }
        else count++;

        ans = max(ans,count);
    }

    cout<<ans<<endl;
    return 0;
}