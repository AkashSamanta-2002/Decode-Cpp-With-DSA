#include<iostream>
using namespace std;

int main(){

    string str  = "Enter a string by getline funtionality : ";
    cout<<str;
    string name;

    getline(cin,name);
    cout<<name<<endl;

    int count = 0;
    
    for(int i=0;name[i]!=0;i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') count++;
    }
    cout<<"The number of vowels are : "<<count;
    return 0;
}