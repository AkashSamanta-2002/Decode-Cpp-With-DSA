#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    // Constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Dequeue{
public:
    Node* f;
    Node* r;
    int size;

    // Constructor
    Dequeue(){
        f = r = NULL;
        size = 0;
    }
    
    // Insert Functions
    void pushBack(int val){
        Node* temp = new Node(val);
        if(size==0) f = r = temp;
        else{
            r->next = temp;
            temp->prev = r;
            r = temp;
        }
        size++;
    }

    void pushFront(int val){
        Node* temp = new Node(val);
        if(size==0) f = r = temp;
        else{
            temp->next = f;
            f->prev = temp;
            f = temp;
        }
        size++;
    }

    // Delete functions
    void popFront(){
        if(size==0){
            cout<<"Dequeue is empty"<<endl;
            return;
        }
        else if(size==1) f = r = NULL;
        else{
            f->next->prev = NULL;
            f = f->next;
        }
        size--;
    }

    void popBack(){
        if(size==0){
            cout<<"Dequeue is empty"<<endl;
            return;
        }
        else if(size==1) f = r = NULL;
        else{
            r = r->prev;
            r->next = NULL;
        }
        size--;
    }


    // Get Functions
    int getFront(){
        if(size==0) cout<<"Dequeue is empty"<<endl;
        return f->val;
    }

    int getBack(){
        if(size==0) cout<<"Dequeue is empty"<<endl;
        return r->val;
    }


    // Display Functions
    void display(){
        Node* temp = f;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Dequeue q;

    q.popFront();

    q.pushBack(30);
    q.pushBack(40);
    q.pushBack(50);

    q.display();

    q.pushFront(20);
    q.pushFront(10);

    q.display();

    q.popBack();
    
    q.display();

    q.popFront();

    q.display();

    cout<<q.getFront()<<endl;
    cout<<q.getBack()<<endl;

    cout<<q.size<<endl;
    return 0;
}