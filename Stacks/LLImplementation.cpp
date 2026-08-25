#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    // Constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Stack{
public:
    Node* head;
    int size;

    // Constructor
    Stack(){
        this->head = NULL;
        this->size = 0;
    }

    // Functions
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
        return; 
    }

    void pop(){
        if(head==NULL) cout<<"Stack is empty"<<endl;
        else{
            head = head->next;
            size--;
        }    
        return; 
    }

    int top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else return head->val;
    }

    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }

    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
        return;
    }
};

int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    
    st.display();

    st.pop();

    st.display();

    cout<<st.top()<<endl;

    cout<<st.size<<endl;

    return 0;
}