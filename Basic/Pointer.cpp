#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int* ptr = &n;
    cout<<(*ptr);   // This actually means n
    return 0;
}