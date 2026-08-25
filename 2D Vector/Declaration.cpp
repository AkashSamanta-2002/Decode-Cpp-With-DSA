#include<iostream>
#include<vector>
using namespace std;

int main(){

    //vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> v(5,vector<int>(10,2));

    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v.size();j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<v.size()<<endl;       // Size of row
    cout<<v[0].size()<<endl;    // Size of each vector's vector which is column 

    return 0;
}