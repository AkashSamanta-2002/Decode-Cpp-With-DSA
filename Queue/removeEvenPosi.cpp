#include<iostream>
#include<queue>
using namespace std;

void removeEvenPosi(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0) q.push(q.front());
        q.pop();
    }
}

void display(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    return;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    display(q);

    removeEvenPosi(q);

    display(q);
    return 0;
}