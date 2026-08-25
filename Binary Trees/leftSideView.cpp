#include<iostream>
#include<vector>
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

void leftSideView(Node* root, vector<int>& ans, int l){
    if(root==NULL) return;

    // Work
    ans[l] = root->val;
    leftSideView(root->right,ans,l+1);
    leftSideView(root->left,ans,l+1);
}

int main(){
    Node* a = new Node(1);   // Root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;

    int n = levels(a);

    vector<int> ans(n);
    leftSideView(a,ans,0);

    for(int i=0;i<n;i++) cout<<ans[i]<<" "; 
    cout<<endl;

    return 0;
}