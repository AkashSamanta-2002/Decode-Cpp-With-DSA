#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Queue{
public:
    Node* f;
    Node* r;
    int size;

    Queue(){
        f = NULL;
        r = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        if(f==NULL){
            f = r = temp;
        }
        else{
            r->next = temp;
            r = temp;
        }
        size++;
        return;
    }

    void pop(){
        if(f==NULL) cout<<"Queue is empthy"<<endl;
        else{
            Node* temp = f;
            f = f->next;
            delete(temp);   // Wastage of node limied
            size--;
        }
        return;
    }

    int front(){
        if(f==NULL) return -1; 
        else return f->val;
    }

    int back(){
        if(f==NULL) return -1;
        else return r->val;
    }

    bool empty(){
        if(size==0) return 1;
        else return 0;
    }

    void display(){
        Node* temp = f;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
        return;
    }
};

int main(){
    Queue q;

    q.pop();
    cout<<q.empty()<<endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    q.display();

    q.pop();
    q.pop();
    q.pop();

    q.display();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<q.size<<endl;

    cout<<q.empty()<<endl;
    return 0;
}