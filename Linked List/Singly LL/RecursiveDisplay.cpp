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

void displayrecc(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrecc(head->next);
}

void displayreccrev(Node* head){
    if(head==NULL) return;
    displayreccrev(head->next);
    cout<<head->val<<" ";
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* temp = a;

    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    displayrecc(a);
    cout<<endl;
    displayreccrev(a);

    return 0;
}