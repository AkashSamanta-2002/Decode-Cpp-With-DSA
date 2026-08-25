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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtEnd(Node* head, int val){
    Node* temp = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = temp;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    display(a);

    InsertAtEnd(a,50);
    InsertAtEnd(a,60);

    display(a);

    return 0;
}