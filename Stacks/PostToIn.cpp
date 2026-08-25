#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

string evaluate(string val1, string val2, char ch){
    if(ch=='+') return val1 + '+' + val2;
    else if(ch=='-') return val1 + '-' + val2; 
    else if(ch=='*') return val1 + '*' + val2; 
    else if(ch=='/') return val1 + '/' + val2; 
    else if(ch=='^') return val1 + '^' + val2; 
}

int main(){ 
    string str = "79+4*8/3-";
    stack<string>val;

    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i]<=57) val.push(to_string(str[i]-48));
        else{
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = evaluate(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<str<<" = "<<val.top();
    return 0;
}