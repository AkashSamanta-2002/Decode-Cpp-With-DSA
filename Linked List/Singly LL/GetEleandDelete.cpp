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

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    int getEleAtIdx(int idx){
        if(idx>=size || idx<0){
            cout<<"Invalid index";
            return -1;
        } 
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++) temp = temp->next;
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(size==1) head = tail = NULL;
        else head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0) cout<<"List is empty";
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            while(temp->next != tail) temp = temp->next;
            temp->next = NULL;
            tail = temp;
            size--;
        } 
        return;
    }

    void deleteAtIdx(int idx){
        if(size==0) cout<<"List is empty";
        else if(idx<0 || idx>=size) cout<<"Invalid index";
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* h = head;
            for(int i=1;i<=idx-1;i++) h = h->next;
            h->next = h->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};  

int main(){
    LinkedList list;
    
    // int n;
    // cout<<"Enter number of elements you want to insert at end : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     int x;
    //     cout<<"Enter the element : ";
    //     cin>>x;
    //     list.insertAtTail(x);
    // }

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    
    // int idx;
    // cout<<"Enter the index you want to get : ";
    // cin>>idx;

    //cout<<list.getEleAtIdx(idx)<<endl;
    
    list.deleteAtIdx(4);
    list.display();

    cout<<list.size;

    return 0;
}