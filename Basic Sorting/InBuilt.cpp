#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v = {5,4,8,6,3,2};
    sort(v.begin(),v.end());        // T.C => O(nlogn)
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}