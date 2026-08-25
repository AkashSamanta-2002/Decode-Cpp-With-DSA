#include<iostream>
#include<stack>
using namespace std;

string removeDuplicates(string s){
    stack<char> st;
    int i=0;
    while(i<s.length()){
        if(st.size()==0 || st.top()!=s[i]) st.push(s[i]);
        i++;
    }
    string ans = "";
    while(st.size()){
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    string ans = removeDuplicates(s);
    cout<<ans;
    return 0;
}