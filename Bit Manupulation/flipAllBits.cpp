#include<iostream>
using namespace std;

string decimalToBinary(int n){
    string res = "";
    while(n!=0){
        if(n%2==0) res = '0' + res;
        else res = '1' + res;
        n /= 2;
    }
    return (res=="")? "0" : res;
}


int flip(int n){
    int temp = n;
    int mask; 
    while(temp!=0){
        mask = temp;
        temp = temp & (temp-1);
    }
    mask = (mask<<1) - 1;
    cout<<decimalToBinary(mask)<<endl;
    return n ^ mask;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int ans = flip(n);

    cout<<"The flip of "<<decimalToBinary(n)<<" is : "<<decimalToBinary(ans);

    return 0;
}