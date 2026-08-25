#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    stack<string> st;
    int i = 0; 
    while(i<s.length()){
        if(s[i]=='(') st.push("(");
        else if(s[i]==')' && st.size()==0) return 0;
        else st.pop();
        i++;
    }
    if(st.size()==0) return 1;
    else return 0;
}
int main(){
    string s;
    cout<<"Enter the brackets : ";
    getline(cin,s);
    
    bool ans = isBalanced(s);

    if(ans) cout<<"Balanced";
    else cout<<"Unbalanced";
    return 0;
}