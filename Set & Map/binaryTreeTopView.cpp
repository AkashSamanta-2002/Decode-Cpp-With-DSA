#include<iostream> 
#include<climits> 
#include<queue> 
#include<map>
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

void topView(Node* root){
    map<int,Node*> m;
    queue<pair<Node*,int> > q;

    pair<Node*,int> p;
    p.first = root;
    p.second = 0;
    q.push(p);

    while(q.size()){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();

        if(m.find(level)==m.end()){
            m[level] = temp;
        }

        if(temp->left){
            pair<Node*,int> p;
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right){
            pair<Node*,int> p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }
    }

    // for(auto ele : m) cout<<(ele.second)->val<<" ";  // Incase of ordered map

    // Or incase of unordered map
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto ele : m){
        int lev = ele.first;
        minLevel = min(minLevel,lev);
        maxLevel = max(maxLevel,lev);
    }

    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]->val<<" ";
    }
}

void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
} 

int main(){
    
    int arr[] = {1,2,3,N,5,N,4,6,7,N,8,N,N,N,N,9,N};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    Node* root = construct(arr,n);
    
    bfs(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    topView(root);
    return 0;
}