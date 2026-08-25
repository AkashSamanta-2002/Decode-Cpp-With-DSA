#include<iostream>
using namespace std;

void sum(int a, int b){                 // This is called function overloading 
    cout<<a+b<<endl;
}

void sum(int a, int b, int c){
    cout<<a+b+c<<endl;
}

void sum(string a, string b){
    cout<<a+b<<endl;
}

// int sum(int a, int b){       // This is not possible the argument parameters must be different
//     return a+b;
// }

int main(){
    sum(9,10);
    sum(10,3,5);
    sum("Akash"," Samanta");
    return 0;
}