#include<iostream>
#include <queue>
using namespace std;

int main(){
    // Max Heap

    priority_queue<int,vector<int>,greater<int>> h;

    int n;
    cout<<"Enter number of elements want to push : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        h.push(x);
    }

    cout<<h.top()<<endl;
    h.pop();
    h.pop();
    cout<<h.top()<<endl;
    return 0;
}