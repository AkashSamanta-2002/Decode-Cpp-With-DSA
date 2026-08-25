#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseFirstK(queue<int>& q, int k){
    stack<int> st;
    int n = q.size();
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }
    return;
}

void display(queue<int> q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    return;
}

int main(){
    queue<int> q;
    int k = 7;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    display(q);

    k = k % q.size();
    reverseFirstK(q,k);

    display(q);
    return 0;
}