#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    // Constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    // cout<<&b<<endl;
    Node t = *(a.next); //This means b container
    cout<<t.val<<endl;
    
    Node temp = a;

    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }

    return 0;
}