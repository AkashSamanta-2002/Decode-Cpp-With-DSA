#include<iostream>
using namespace std;

int maxPowerOfTwoM1(int n){
    int temp;
    while(n){
        temp = n;
        n = n & (n-1);
    }
    return temp;
}

int maxPowerOfTwoM2(int n){
    n = n | n>>1;
    n = n | n>>2;
    n = n | n>>4;
    n = n | n>>8;
    n = n | n>>16;

    return (n+1)>>1;    // Right shift 1 in replace of /2
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"The maximum power of two which is less than "<<n<<" is : "<<maxPowerOfTwoM2(n);
    return 0;
}