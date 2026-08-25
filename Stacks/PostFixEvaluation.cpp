#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

int evaluate(int val1, int val2, char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2; 
    else if(ch=='*') return val1 * val2; 
    else if(ch=='/') return val1 / val2; 
    else if(ch=='^') return pow(val1,val2); 
}

int main(){ 
    string str = "79+4*8/3-";
    stack<int>val;

    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
        else{
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = evaluate(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<str<<" = "<<val.top();
    return 0;
}