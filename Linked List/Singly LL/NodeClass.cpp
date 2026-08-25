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

int main(){
    Node* a = new Node(10); // Here a is a Node pointer which stores the address of a node which value is 10
    Node* b = new Node(20);
    Node* c = new Node(30);

    a->next = b; // This actually means (*a).next = b;  

    cout<<a->next->val;

    return 0;
}