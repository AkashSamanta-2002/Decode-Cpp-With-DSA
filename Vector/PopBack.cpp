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

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

    cout<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";


    return 0;
}