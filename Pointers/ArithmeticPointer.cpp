#include<iostream>
using namespace std;

int main(){
    int n = 2;
    int* ptr = &n;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    return 0;
}