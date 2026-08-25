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
int size(Node* root){
    return (root==NULL)? 0 : size(root->left) + size(root->right) + 1;
}
int main(){
    Node* a = new Node(1);   // Root
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

    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);
    Node* k = new Node(11);
    Node* l = new Node(12);

    d->left = h;
    d->right = i;
    e->left = j;
    f->left = k;
    f->right = l;


    int s = size(a);
    cout<<s;

    return 0;
}