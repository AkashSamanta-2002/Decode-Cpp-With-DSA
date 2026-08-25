#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(22);
    v.push_back(35);
    v.push_back(41);
    v.push_back(1);
    v.push_back(22);
    v.push_back(22);
    v.push_back(35);
    v.push_back(41);
    v.push_back(1);
    v.push_back(22);
    v.push_back(1);
    v.push_back(22);
    v.push_back(35);
    v.push_back(41);
    v.push_back(1);
    v.push_back(22);
    v.push_back(22);
    
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    cout<<endl;

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

    cout<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

    cout<<endl;
    cout<<endl; 
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    return 0;
}