#include <iostream>
#include<string>
#include <typeinfo>
using namespace std;

int main() {
    char str = '0';
    // double y = (double)x;
    // cout << "Type of a: " << typeid(y).name() <<endl;
    int ascii = (int) str;
    cout<<ascii;

    return 0;
}