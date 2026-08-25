#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int ans[n-k+1];
    int p = -1;

    for(int i=0;i<k;i++){
        if(arr[i]<0){
            ans[0] = arr[i];
            p = i;
            break;
        } 
    }

    int i=1, j=k;
    while(j<n){
        if(p>=i) ans[i] = arr[p];
        else{
            for(p=i;p<=j;p++){
                if(arr[p]<0){
                    ans[i] = arr[p];
                    break;
                }
            }
        }
        i++;
        j++;
    }

    for(int ele : ans) cout<<ele<<" ";
    return 0;
}