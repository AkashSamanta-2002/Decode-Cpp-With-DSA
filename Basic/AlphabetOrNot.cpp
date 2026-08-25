#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    int ascii = (int)ch;    // Typecasting

    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90) cout<<"Alphabet";     // Hierarchy of operators -> && > || 
    else cout<<"Not an alphabet";
   
    return 0;
}