#include<iostream>
using namespace std;

int main(){
    // string str1 = "Enter a string by cin funtionality : ";
    // cout<<str1;
    // string name1;

    // cin>> name1;     // It only works when no spaces are present in the input.
    // cout<<name1;

    string str2  = "Enter a string by getline funtionality : ";
    cout<<str2;
    string name2;

    getline(cin,name2);
    cout<<name2<<endl;
    return 0;
}