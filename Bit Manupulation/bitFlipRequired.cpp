#include<iostream>
using namespace std;

int bitFlipReq(int a, int b){
    int temp = a ^ b;

    int count = 0;
    while(temp){
        count++;
        temp = temp & (temp-1);
    }
    return count;
}

int main(){
    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    int ans = bitFlipReq(a,b);

    cout<<"The number of bit flip required to grt "<<b<<" from "<<a<<" is : "<<ans;
    return 0;
}