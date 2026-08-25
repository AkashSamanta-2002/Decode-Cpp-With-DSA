#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a even size string : ";
    getline(cin,str);
    int length = str.length();

    int n = length / 2;

    cout<<str.substr(n);

    return 0;
}