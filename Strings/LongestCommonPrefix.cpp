#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string> v ={"flower","flow","flight","akash","raghav"};
    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}