#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    stack<int> temp1;
    while(st.size()){
        temp1.push(st.top());
        st.pop();
    }
    stack<int> temp2;
    while(temp1.size()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()){
        st.push(temp2.top());
        temp2.pop();
    }
    cout<<st.empty()<<endl;
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<st.empty()<<endl;
    return 0;
}