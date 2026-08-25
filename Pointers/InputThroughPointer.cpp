#include<iostream>
using namespace std;

int main(){
    int n = 2;
    int* p = &n;
    cout<<"Enter a number n : ";
    cin>>*p;
    cout<<"n = "<< n <<endl;
    cout<<"*p = "<<*p;
    return 0;
}