#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    // cout<<st.size()<<endl;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> temp;
    cout<<"Top to bottom : ";
    while(st.size()!=0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    cout<<"Bottom to top : ";
    while(temp.size()){
        int x = temp.top();
        cout<<temp.top()<<" ";
        temp.pop();
        st.push(x);
    }
    cout<<endl;
    cout<<st.size()<<endl;
    return 0;
}