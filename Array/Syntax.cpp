#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;
    4[arr] = 500;
    cout<<4[arr]<<endl;
    for(int i=0;i<5;i++){
        cout<<i[arr]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<i[ptr]<<" ";
    }
    return 0;
}