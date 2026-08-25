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

int levels(Node* root){
    if(root==NULL) return 0;
    int leftLevels = levels(root->left);
    int rightLevels = levels(root->right);
    return 1 + max(leftLevels,rightLevels);
}

void nthLevelRev(Node* root, int currLevel, int level){
    if(root==NULL) return;
    if(level==currLevel){
        cout<<root->val<<" ";
        return;
    }
    nthLevelRev(root->right,currLevel+1,level);
    nthLevelRev(root->left,currLevel+1,level);
}

void levelOrderRightToLeft(Node* root){
    for(int i=1;i<=levels(root);i++){
        nthLevelRev(root,1,i);
        cout<<endl;
    }
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

    levelOrderRightToLeft(a);

    return 0;
}