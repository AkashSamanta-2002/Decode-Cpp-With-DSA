#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
   
    int x = stoi(str);

    x++;
    cout<<x; 
   
    return 0;
}