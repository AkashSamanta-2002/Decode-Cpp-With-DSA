#include<iostream>
#include<stack>
using namespace std;

void pushAtIdxRec(stack<int>& st, int idx, int val){
    if(st.size()==idx){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtIdxRec(st,idx,val);
    st.push(x);
}

void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    displayRec(st);
    cout<<endl;
    pushAtIdxRec(st,3,100);

    displayRec(st);
    return 0;
}