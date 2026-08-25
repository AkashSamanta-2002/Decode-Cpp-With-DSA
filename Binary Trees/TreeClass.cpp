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
        this->right = NULL;
        this->left = NULL;
    }
};

void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int main(){
    Node* a = new Node(1);   // Root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);
    Node* k = new Node(11);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    e->left = i;
    e->right = j;
    f->right = k;
    
    display(a);

    // Node* h = new Node(8);
    // Node* i = new Node(9);
    // Node* j = new Node(10);
    // Node* k = new Node(11);
    // Node* l = new Node(12);

    // d->left = h;
    // d->right = i;
    // e->left = j;
    // f->left = k;
    // f->right = l;

    // cout<<endl;
    // display(a);

    return 0;
}