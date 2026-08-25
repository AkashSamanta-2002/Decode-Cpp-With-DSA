#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v.at(0)<<endl;
    v.at(3) = 400;
    v[1] = 20;                  // 'v.at()' and v[] both are same both access the elements.

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    
    return 0;
}