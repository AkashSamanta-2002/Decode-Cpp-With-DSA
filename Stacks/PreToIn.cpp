#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

string evaluate(string val1, string val2, char ch){
    string str = "";
    str += val1;
    str.push_back(ch);
    str += val2;
    return str;
}

int main(){
    string str = "";
    cout<<"Enter the expression : ";
    getline(cin,str);
    stack<string>val;

    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57) val.push(to_string(str[i]-48));
        else{   // Operators or brackets
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = evaluate(val1,val2,str[i]);
            val.push(ans);
        }
    }

    cout<<str<<" = "<<val.top();
    return 0;
}