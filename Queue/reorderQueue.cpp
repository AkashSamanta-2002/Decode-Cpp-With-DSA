#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    stack<int> st;

    int n;
    cout<<"Enter number of elements : ";
    cin>>n;

    cout<<"Enter all the elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    
    while(q.size()!=n/2){
        st.push(q.front());
        q.pop();
    }
    
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    
    while(q.size()!=n/2){
        st.push(q.front());
        q.pop();
    } 
    
    while(st.size()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    
    // Reverse
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }

    // Printing
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

    return 0;
}