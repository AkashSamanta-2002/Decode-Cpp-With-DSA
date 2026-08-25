#include<iostream>
using namespace std;

int main(){
    int a = 5;
    // string str = (string)a;     // Gives error

    string str = to_string(a);
    cout<<str;
    return 0;
}
