#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v1 = {1,2,3};
    vector<int>v2 = {4,5};
    vector<int>v3 = {6,7,8,9,10};


    vector< vector <int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[1][1];
    return 0;
}