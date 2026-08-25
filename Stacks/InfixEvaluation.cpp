#include<iostream>
#include<cmath>
#include<stack>
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
    string str = "2+9*8-9^2";
    stack<int>val;
    stack<char>op;
    // Traverse through the expression
    for(int i=0;i<str.length();i++){
        // Check if the str[i] is a number or a operator by ascii value
        if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
        else{
            if(op.size()==0 || prio(str[i])>prio(op.top())) op.push(str[i]);
            else{
                while(op.size()!=0 && prio(str[i])<=prio(op.top())){
                    // Evaluate
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = evaluate(val1,val2,ch);   // val1 ch val2
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }
    // After the traversing there op stack can still have some operations left
    while(op.size()!=0){
        // Evaluate
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        int ans = evaluate(val1,val2,ch);
        val.push(ans);
    } 

    cout<<str<<" = "<<val.top()<<endl;
    return 0;
}