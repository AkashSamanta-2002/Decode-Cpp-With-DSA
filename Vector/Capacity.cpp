#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;               // Capacity = 0
    cout<<v.capacity()<<endl;

    v.push_back(1);             // Capacity = 1
    cout<<v.capacity()<<endl;       
    v.push_back(22);            // Capacity = 2
    cout<<v.capacity()<<endl;
    v.push_back(35);            // Capacity = 4
    cout<<v.capacity()<<endl;
    v.push_back(41);            // Capacity = 4
    cout<<v.capacity()<<endl;
    v.push_back(55);            // Capacity = 8
    cout<<v.capacity()<<endl;
    
    return 0;
}