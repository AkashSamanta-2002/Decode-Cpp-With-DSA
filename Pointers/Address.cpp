#include<iostream>
using namespace std;

int main(){
    int n = 2;
    cout<< *(&n) <<endl;
    int* p = &n;
    cout << &n <<endl<< p <<endl<< *p <<endl;
    char ch = 'a';
    char* chp = &ch;
    float f = 9.8;
    float* fp = &f;
    cout << chp <<endl<< *chp <<endl<< fp <<endl<< *fp <<endl;
    return 0;
}