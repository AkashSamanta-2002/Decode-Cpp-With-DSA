#include<iostream>
using namespace std;

int n;

// void generate(string str){
//     if(str.length()==n){
//         cout<<str;
//         cout<<endl;
//         return;
//     }
//     generate(str+'0');
//     generate(str+'1');
// }

void generate_without(string str){
    if(str.length()==n){
        cout<<str;
        cout<<endl;
        return;
    }

    generate_without(str+'0');
    if(str.length()==0 || str[str.length()-1]=='0') generate_without(str+'1');
}

int main(){
    n = 2;
    generate_without("");
    return 0;
}