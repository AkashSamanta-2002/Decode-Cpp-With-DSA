#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter a even size string : ";
    getline(cin,str);
    int length = str.length();

    int n = length / 2;

    reverse(str.begin(),str.begin()+n);

    cout<<str;
    return 0;
}