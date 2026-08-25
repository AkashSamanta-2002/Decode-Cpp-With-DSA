#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int ans = fibo(n);

    cout<<"The fibonacci number is : "<<ans;
    return 0;
}