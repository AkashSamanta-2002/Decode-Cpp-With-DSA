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

void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int MaxNode(Node* root){
    if(root==NULL) return INT_MIN;
    int leftMax = MaxNode(root->left);
    int rightMAx = MaxNode(root->right);
    // return max(root->val,max(MaxNode(root->left),MaxNode(root->right)));
    return max(root->val,max(leftMax,rightMAx));
}

int main(){
    Node* a = new Node(2);   // Root
    Node* b = new Node(4);
    Node* c = new Node(10);
    Node* d = new Node(6);
    Node* e = new Node(15);
    Node* f = new Node(11);
    // Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    // c->right = g;
    
    int max = MaxNode(a);

    cout<<max;
    
    return 0;
}