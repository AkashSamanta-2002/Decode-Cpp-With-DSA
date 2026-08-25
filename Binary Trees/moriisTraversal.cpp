#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* right;
    Node* left;

    // Constructor
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void morrisTraversal(Node* root){
    Node* curr = root;
    while(curr){
        if(curr->left!=NULL){   // Means predecessor exists 
            Node* pred = curr->left;
            while(pred->right!=NULL && pred->right!=curr) pred = pred->right;   // Finding predecessor or linked node
            if(pred->right==NULL){
                pred->right = curr; // Link
                curr = curr->left;
            }
            if(pred->right==curr){  
                pred->right = NULL; // Unlink
                cout<<curr->val<<" ";   // Viisit
                curr = curr->right; 
            }
        }
        else{
            cout<<curr->val<<" ";   // Visit
            curr = curr->right;
        }
    }
}

int main(){ 
    // Node* a = new Node(2);
    // Node* b = new Node(4);
    // Node* c = new Node(5);
    // Node* d = new Node(6);
    // Node* e = new Node(10);
    // Node* f = new Node(11);

    // a->left = b;
    // a->right = e;
    // b->left = d;
    // b->right = c;
    // e->right = f;


    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g; 

    morrisTraversal(a);

    return 0;
}