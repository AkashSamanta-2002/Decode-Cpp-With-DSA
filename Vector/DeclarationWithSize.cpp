#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);

    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v[0] = 6;
    v[3] = 9;
    
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    
    return 0;
}