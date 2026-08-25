#include<iostream>
using namespace std;

class Stack{
public:
    int size;
    int arr[5];
    int idx;
    
    Stack(){
        size = 5;
        idx = -1;
    }
    // Functions
    void push(int val){
        if(idx==size-1) cout<<"Stack is full"<<endl; 
        else{
            idx++;
            arr[idx] = val;
        }
        return;
    }

    void pop(){
        if(idx==-1) cout<<"Stack is empty"<<endl;
        else idx--;
        return;
    }

    int top(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else return arr[idx];
    }

    int currentSize(){
        return idx+1;
    }

    void display(){
        if(idx==-1) cout<<"Stack is empty"<<endl;
        else for(int i=0;i<=idx;i++) cout<<arr[i]<<" ";
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
    st.pop();

    st.display();

    cout<<st.top()<<endl;

    cout<<st.currentSize();


    return 0;
}