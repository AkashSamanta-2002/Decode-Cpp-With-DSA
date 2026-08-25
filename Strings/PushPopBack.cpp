#include<iostream>
using namespace std;

int main(){
    string str = "Akash Samanta";
    cout<<str<<endl;

    str.push_back('z');
    str.push_back('y');
    str.push_back('x');

    cout<<str<<endl;

    str.pop_back();
    cout<<str<<endl;
    
    return 0;
}