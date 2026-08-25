#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(10,7);         // Initial size 10, each element has value 7.

    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    
    return 0;
}