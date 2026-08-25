#include<iostream>
using namespace std;
void add(int arr[], int n, int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sum += arr[n-1];
    add(arr,n-1,sum);
}
int main(){
    int arr[] = {1,2,3,4};
    int n = 4;
    int sum = 0;
    add(arr,n,sum);
    return 0;
}