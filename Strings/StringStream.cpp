#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str = "Raghav is a math teacher";
    stringstream s(str);

    string temp;
    while(s>>temp){
        cout<<temp<<endl;
    }  

    // s>>temp;
    // cout<<temp;
    // s>>temp;
    // cout<<temp;  
    return 0;
}