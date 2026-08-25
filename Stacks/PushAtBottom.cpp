#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
    return;
}

void display(stack<int> st){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    return;
}

int main(){
    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    display(st);

    pushAtBottom(st,10);
    
    display(st);
    cout<<st.size()<<endl;
    return 0;
}