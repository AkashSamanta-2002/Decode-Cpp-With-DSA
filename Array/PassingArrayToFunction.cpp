#include<iostream>
using namespace std;
void print(int arr[], int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return;
}
void swap(int* arr){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}
int main(){
    int arr[2] = {1,10};
    print(arr,2);   // One way of passing 
    swap(&arr[0]);  // Another way of passing through pointersd. 
    cout<<endl;     // In both the cases the resiving array in the functions are define differently.
    print(arr,2);
    return 0;
}