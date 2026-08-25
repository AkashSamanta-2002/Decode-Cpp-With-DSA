#include<iostream>
using namespace std;

int main(){
    string str = "akash samanta";
    string ans = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') ans += str[i];
    }
    cout<<ans;
    return 0;
}