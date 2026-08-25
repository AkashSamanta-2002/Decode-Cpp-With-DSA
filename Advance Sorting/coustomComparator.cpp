#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int x, int y){
    return x>y;         // This line means if the statement is true retrun the first element x otherwise return second element y 
}

int main(){
    vector<int> arr = {8,3,2,4,9,1,2,36,5,8};
    sort(arr.begin(),arr.end(),cmp);        // Sort using coustom Comparator

    for(int ele : arr) cout<<ele<<" ";
    return 0;
}