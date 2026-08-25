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

// void postorder(Node* root){
//     if(root==NULL) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->val<<" "; 
// }

int main(){
    // int n; 
    // cout<<"Enter number of nodes : ";
    // cin>>n;

    // int arr[n];
    // cout<<"Enter all the nodes : ";
    // for(int i=0;i<n;i++) cin>>arr[i];


    int arr[] = {1,2,3,4,5,N,6,N,N,7,8,9,N};
    int n =sizeof(arr)/sizeof(arr[0]);

    Node* root = construct(arr,n);

    bfs(root);

    return 0;
}