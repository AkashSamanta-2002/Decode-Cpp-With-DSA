#include<iostream>
#include<stack>
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

void preorderIterative(Node* root){
    stack<Node*> st;
    st.push(root);
    while(st.size()){
        Node* temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    cout<<endl;
}

void postorderIterative(Node* root){
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(st1.size()){
        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left) st1.push(temp->left);
        if(temp->right) st1.push(temp->right);
    }

    while(st2.size()){
        cout<<st2.top()->val<<" ";
        st2.pop();
    }
    cout<<endl;
}

void inorderIterative(Node* root){
    stack<Node*> st;
    Node* node = root;
    while(st.size() || node!=NULL){
        if(node!=NULL){
            st.push(node);
            node = node->left;
        }
        else{
            Node* temp = st.top();
            st.pop();
            cout<<temp->val<<" ";
            node = temp->right;
        }
    }
    cout<<endl;
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

    preorderIterative(a);
    postorderIterative(a);
    inorderIterative(a);

    return 0;
}