#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(123);
    v.push_back(56);
    v.push_back(12);
    v.push_back(85);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Use best/efficient technique to sort 
    sort(v.begin(),v.end());                    // Sort in ascending order 
    
    for(int i=0;i<v.size();i++){        
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end(),greater<int>());    // Sort in descending order 

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}