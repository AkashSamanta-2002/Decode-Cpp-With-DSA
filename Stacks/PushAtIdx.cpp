#include<iostream>
#include<stack>
using namespace std;

void pushAtIdx(stack<int>& st, int idx, int val){
    stack<int> temp;
    // for(int i=1;i<=st.size()-idx;i++){
    //     temp.push(st.top());
    //     st.pop();
    // }
    while(st.size()>idx){
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
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    display(st);

    pushAtIdx(st,3,90);
    
    display(st);
    cout<<st.size()<<endl;
    return 0;
}