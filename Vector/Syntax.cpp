#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {9,8,7};
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 0;
}