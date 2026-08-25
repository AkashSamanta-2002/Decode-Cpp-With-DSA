#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    int ascii = (int)ch;    // Typecasting

    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') cout<<"The character is a vowel";
        else cout<<"The character is a consonant";
    }     
    else cout<<"Not an alphabet";
   
    return 0;
}