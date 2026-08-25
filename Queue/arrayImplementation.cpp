#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    vector<int> arr;
    int n, f, r;
    
    Queue(int val){
        f = r = -1;
        n = val;
        vector<int> v(val);
        arr = v;
    }

    // Functions
    void push(int val){
        if(r==n-1) cout<<"Queue is full"<<endl;
        else if(f==-1){
            r++;
            f++;
            arr[r] = val;
        }
        else{
            r++;
            arr[r] = val;
        }
    }

    void pop(){
        if(f==-1) cout<<"Queue is empty"<<endl;
        else if(r==f) r = f = -1;
        else f++;
    }

    int front(){
        if(f==-1) return -1;
        else return arr[f];
    }

    int back(){
        if(f==-1) return -1;
        else return arr[r];
    }

    int size(){
        if(f==-1) return 0;
        else return r-f+1;
    }
    
    bool empty(){
        if(size()==0) return 1;
        else return 0;
    }

    void display(){
        if(f==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=f;i<=r;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Queue q(6);

    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    q.display();

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    q.display();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}