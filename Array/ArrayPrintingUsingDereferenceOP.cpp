#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,4,5,64,3};
    int* ptr = arr;

    for(int i=1;i<=5;i++){
        cout<<*ptr<<" ";
        ptr++;          // Increment of address by 4
    }

    return 0;
}