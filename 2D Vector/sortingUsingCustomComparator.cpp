#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(vector<int> x, vector<int> y){
    return x[1]>y[1]; 
}

int main(){
    vector<vector<int>> arr = {{1,-4},{2,10},{3,5},{2,3}};
    
    sort(arr.begin(),arr.end(),cmp);

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}