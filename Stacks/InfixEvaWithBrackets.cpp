#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else return 3;
}

int evaluate(int val1, int val2, char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2; 
    else if(ch=='*') return val1 * val2; 
    else if(ch=='/') return val1 / val2; 
    else if(ch=='^') return pow(val1,val2); 
}

int main(){
    string str;
    cout<<"Enter the infix expression : ";
    getline(cin,str);
    stack<int> val;
    stack<char> op;

    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
        else{
            if(op.size()==0) op.push(str[i]);

            else if(str[i]=='(' || op.top()=='(') op.push(str[i]);

            else if(str[i]==')'){
                while(op.top()!='('){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = evaluate(val1, val2,ch);
                    val.push(ans);
                }
                op.pop();
            }

            else if(prio(op.top())<prio(str[i])) op.push(str[i]);

            else if(prio(op.top())>=prio(str[i])){
                while(op.size()>0 && prio(op.top())>=prio(str[i])){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = evaluate(val1, val2,ch);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }

    while(op.size()>0){
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        int ans = evaluate(val1, val2,ch);
        val.push(ans);
    }

    cout<<str<<" = "<<val.top()<<endl;
    return 0;
}