#include<iostream>
using namespace std;

void findUnique(int arr[], int n){
    int res = 0;
    for(int i=0;i<n;i++) res ^= arr[i];
    
    int k = 0;
    int temp = res;
    while(true){
        if((temp & 1)==1) break;
        k++;
        temp = temp >> 1;
    }

    int kthSetBit = 0;
    for(int i=0;i<n;i++){

        int num = arr[i];
        int x = num >> k;
        if((x & 1)==1) kthSetBit ^= num;
    }

    cout<<"First unique element is : "<<kthSetBit<<endl;
    res = kthSetBit ^ res;
    cout<<"Second unique element is : "<<res<<endl;
}

int main(){
    int arr[] = {1,2,1,3,2,3,9,10,9,55};
    int n = sizeof(arr)/sizeof(arr[0]);

    findUnique(arr, n);

    return 0;
}