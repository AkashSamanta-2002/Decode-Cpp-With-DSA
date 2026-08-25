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

class DoublyLL{
public:
    Node* head;
    Node* tail;
    int size;

    // Constructor
    DoublyLL(){
        head = tail = NULL;
        size = 0;
    }
    
    // Insert Functions
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        Node* temp = new Node(val);
        if(idx<0 || idx>size) cout<<"Invalid index";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* h = head;
            for(int i=1;i<=idx-1;i++) h = h->next;
            temp->next = h->next;
            h->next = temp;
            temp->prev = h;
            temp->next->prev = temp;
            size++; 
        }
    }

    // Delete functions
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(size==1) head = tail = NULL;
        else{
            head->next->prev = NULL;
            head = head->next;
        }
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(size==1) head = tail = NULL;
        else{
            tail = tail->prev;
            tail->next = NULL;
        }
        size--;
    }

    void deleteAtIdx(int idx){
        if(size==0) cout<<"List is empty";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail(); 
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++) temp = temp->next;      
            temp->next->next->prev = temp;
            temp->next = temp->next->next;
            size--;
        }
    }

    // Get Functions
    int getHead(){
        if(size==0) cout<<"List is empty";
        return head->val;
    }

    int getTail(){
        if(size==0) cout<<"List is empty";
        return tail->val;
    }

    int getIdx(int idx){
        if(size==0) cout<<"List is empty";
        Node* temp = head;
        for(int i=1;i<=idx;i++) temp = temp->next;
        return temp->val;
    }

    // Display Functions
    void displayForward(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void displayReverse(){
        Node* temp = tail;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
};

int main(){
    DoublyLL list;
    // // Insert At Tail
    list.insertAtTail(30);
    list.insertAtTail(50);
    list.insertAtTail(60);
    list.insertAtTail(70);
    list.insertAtTail(80);
    list.insertAtTail(90);
    list.insertAtTail(100);
    cout<<"Display forward after insert at tail : ";
    list.displayForward();
    // Insert At Head
    list.insertAtHead(20);
    list.insertAtHead(10);
    cout<<"Display forward after insert at head : ";
    list.displayForward();
    // Insert At Index
    list.insertAtIdx(3,40);
    cout<<"Display forward after insert at index : ";
    list.displayForward();
    // Delete At Head
    list.deleteAtHead();
    cout<<"Display after head deletion : ";
    list.displayForward();
    // Delete At Tail
    list.deleteAtTail();
    cout<<"Display after tail deletion : ";
    list.displayForward();
    // Delete At Index
    list.deleteAtIdx(2);
    cout<<"Display after index deletion : ";
    list.displayForward();
    // Get Head
    cout<<"The value at head is : "<<list.getHead()<<endl;
    // Get Tail
    cout<<"The value at tail is : "<<list.getTail()<<endl;
    // Get Index
    cout<<"The value at index is : "<<list.getIdx(4)<<endl;
    
    list.displayReverse();
    cout<<"Current size of the list : "<<list.size;
    return 0;
}