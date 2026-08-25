#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int i=0;i<10;i++) sum += arr[i];
    cout<<"The sum of all the elements of the given array is : "<<sum;
   
    return 0;
}