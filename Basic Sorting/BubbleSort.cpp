#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){   
        cout<<"Pass "<<i+1;  // n-1 passes
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        cout<<endl;
        if(flag==true) break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}