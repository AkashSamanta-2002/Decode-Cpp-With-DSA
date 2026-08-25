#include<iostream>
#include<climits>
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

int levels(Node* root){
    if(root==NULL) return 0;
    int leftLevels = levels(root->left);
    int rightLevels = levels(root->right);
    return 1 + max(leftLevels,rightLevels);
}

int main(){
    Node* a = new Node(1);   // Root
    Node* b = new Node(4);
    Node* c = new Node(7);
    Node* d = new Node(2);
    Node* e = new Node(5);
    Node* f = new Node(8);
    Node* g = new Node(10);
    Node* h = new Node(11);
    Node* i = new Node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    g->left = h;
    g->right = i;
    
    int l = levels(a);

    cout<<l;
    
    return 0;
}