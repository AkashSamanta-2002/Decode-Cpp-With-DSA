#include<iostream>
#include<vector>
using namespace std;

void changevector(vector<vector<int>>& nums){            
    nums[0][0] = 200;
    return;
}

void length(vector<vector<int>> &v){
    cout<<v.size()<<endl;
}

int main(){
    vector<vector<int>> arr = {{1},{3,4,5},{6,7,8,9,10}};
                    // index -> 0     1         2
    cout<<arr[0][0]<<endl;
    changevector(arr);
    cout<<arr[0][0]<<endl;

    length(arr);

    // cout<<arr.size()<<endl;
    // cout<<arr[0].size()<<endl;
    // cout<<arr[1].size()<<endl;
    // cout<<arr[2].size()<<endl;

    return 0;
}