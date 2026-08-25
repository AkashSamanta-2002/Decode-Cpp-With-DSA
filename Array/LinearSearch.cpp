#include<iostream>
using namespace std;
int Linear_Search(int *arr, int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = Linear_Search(&arr[0],size,key);

    if(ans==-1) cout<<key<<" is not present in the array";
    else cout<<key<<" is present in the array at index "<<ans;
    return 0;
}