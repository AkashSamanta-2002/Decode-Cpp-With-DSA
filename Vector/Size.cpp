#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;           // Size = 0
    cout<<v.size()<<endl;

    v.push_back(1);         // Size = 1
    cout<<v.size()<<endl;
    v.push_back(22);        // Size = 2
    cout<<v.size()<<endl;
    v.push_back(35);        // Size = 3
    cout<<v.size()<<endl;
    v.push_back(41);        // Size = 4
    cout<<v.size()<<endl;
    
    return 0;
}