#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int> v;

    // Functions
    void push(int val){
        v.push_back(val);
        return;
    }

    void pop(){
        if(v.size()==0) cout<<"Stack is empty"<<endl;
        else v.pop_back();
        return;
    }

    int top(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else return v[v.size()-1];
    }

    int currentSize(){
        return v.size();
    }

    void display(){
        if(v.size()==0) cout<<"Stack is empty"<<endl;
        else for(int ele : v) cout<<ele<<" ";
        cout<<endl;
    }
};

int main(){
    Stack st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    st.pop();
    st.pop();
    st.pop();

    st.display();

    cout<<st.top()<<endl;

    cout<<st.currentSize();


    return 0;
}