#include<iostream>
using namespace std;

int main(){
    string str1 = "Akash";
    string str2 = "Samanta";

    string str3 = str1 + str2;
    str1 = str1 + str2;
    cout<<str3<<endl<<str1<<endl;

    string s = "abc";
    s = s + "def";
    cout<<s<<endl;

    s = "xyz" + s;
    cout<<s<<endl;

    s = s + 'd';
    cout<<s;
    return 0;
}