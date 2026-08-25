#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return;
}
int main(){
    int arr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int res[12];
    int n = 12;

    int max = arr[n-1];
    res[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        res[i] = max;
        if(max<arr[i]) max = arr[i];
    }

    display(res,12);
    return 0;
}