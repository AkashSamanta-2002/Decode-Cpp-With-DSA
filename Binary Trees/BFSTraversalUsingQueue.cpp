#include<iostream>
#include<queue>
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

void bfs(Node* root){
    queue<Node*> q;
    q.push(root);
    
    while(q.size()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main(){
    Node* a = new Node(1);   // Root
    Node* b = new Node(7);
    Node* c = new Node(9);
    Node* d = new Node(2);
    Node* e = new Node(6);
    Node* f = new Node(10);
    Node* g = new Node(5);
    Node* h = new Node(11);
    Node* i = new Node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = g;
    e->right = h;
    c->right = f;
    f->left = i;

    bfs(a);

    return 0;
}