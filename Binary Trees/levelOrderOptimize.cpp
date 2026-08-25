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

void levelOrder(Node* root, vector<vector<int>>& ans, int l){
    if(root==NULL) return;

    // Work
    ans[l].push_back(root->val);

    levelOrder(root->left,ans,l+1);
    levelOrder(root->right,ans,l+1);
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

    int n = levels(a);

    vector<vector<int>> ans;
    for(int i=1;i<=n;i++){
        vector<int> v;
        ans.push_back(v);       
    }

    levelOrder(a,ans,0);

    for(int i=0;i<n;i++){
        for(int j=0;j<ans[i].size();j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}