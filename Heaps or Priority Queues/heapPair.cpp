#include<iostream>
#include<queue>
// typedef pair <int,int> pi;
using namespace std;

int main(){
    priority_queue<pair <int,int>,vector<pair <int,int>>,greater<pair <int,int>>> pq;
    pair<int,int> p ={3,2};
    pq.push(p);
    pair<int,int> p2 ={2,3};
    pq.push(p2);
    pair<int,int> p1 ={2,1};
    pq.push(p1);
    pair<int,int> p3 ={1,2};
    pq.push(p3);

    while(pq.size()){
        cout<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}