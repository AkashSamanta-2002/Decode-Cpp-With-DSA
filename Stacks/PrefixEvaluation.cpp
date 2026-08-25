#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int evaluate(int val1, int val2, char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2; 
    else if(ch=='*') return val1 * val2; 
    else if(ch=='/') return val1 / val2; 
    else if(ch=='^') return pow(val1,val2); 
}

int main(){
    string str = "";
    cout<<"Enter the expression : ";
    getline(cin,str);
    stack<int>val;

    for(int i=str.length()-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57) val.push((str[i]-48));
        else{   // Operators or brackets
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = evaluate(val1,val2,str[i]);
            val.push(ans);
        }
    }

    cout<<str<<" = "<<val.top();
    return 0;
}