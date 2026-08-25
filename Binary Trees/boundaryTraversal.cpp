#include<iostream>
#include<climits>
#include<queue>
#define N INT_MIN
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

Node* construct(int arr[], int n){
    queue<Node*> q;
    int i=1, j=2;
    Node* root = new Node(arr[0]); 
    q.push(root);
    
    while(q.size() && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=N) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=N) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}

void leftBoundary(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}

void leafNode(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}

void boundary(Node* root){
    leftBoundary(root);
    leafNode(root);
    rightBoundary(root->right);
}

int main(){
    int arr[] = {1,2,3,4,5,N,6,7,N,8,N,9,10,N,11,N,12,N,13,N,14,15,16,N,17,N,N,18,N,19,N,N,N,20,21,22,23,N,24,25,26,27,N,N,28};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = construct(arr,n);

    boundary(root);
    
    return 0;
}