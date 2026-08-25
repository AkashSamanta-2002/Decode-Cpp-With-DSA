#include<iostream>
using namespace std;

int main(){
    string str = "abcde";
    cout<<str.substr(0,2)<<endl;
    cout<<str.substr(3);      // .substr(index,length)

    return 0;
}