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

void nthLeveldisplay(Node* root, int level, int currLevel){
    if(root==NULL) return;
    if(level==currLevel){
        cout<<root->val<<" ";
        return;
    }
    nthLeveldisplay(root->left,level,currLevel+1);
    nthLeveldisplay(root->right,level,currLevel+1);
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

    a->left = g;
    a->right = i;
    g->left = b;
    g->right = f;
    f->left = e;
    f->right = k;
    i->right = j;
    j->left = e;
    
    nthLeveldisplay(a,3,1);

    return 0;
}