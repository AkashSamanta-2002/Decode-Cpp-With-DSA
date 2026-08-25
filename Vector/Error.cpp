#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v[1] = 13;          // This is a segmentation error
    v.push_back(4);
    v.push_back(6);

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    
    return 0;
}