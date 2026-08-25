#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return;
}
int main(){
    int arr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int res[12];

    // for(int i=0;i<12;i++){
    //     for(int j=i-1;j>=0;j--){
    //         if(arr[j]>max) max = arr[j];
    //     }
    //     res[i] = max;
    // }

    int max = arr[0];
    res[0] = -1;
    for(int i=1;i<12;i++){
        res[i] = max;
        if(max<arr[i]) max = arr[i];
    }

    display(res,12);
    return 0;
}