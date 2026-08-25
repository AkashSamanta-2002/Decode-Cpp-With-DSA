#include<iostream>
#include<cmath>
using namespace std;

string decimalToBinary(int n){
    string res = "";
    while(n!=0){
        if(n%2==0) res = '0' + res;
        else res = '1' + res;
        n /= 2;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;

    cout<<decimalToBinary(n);
    return 0;
}