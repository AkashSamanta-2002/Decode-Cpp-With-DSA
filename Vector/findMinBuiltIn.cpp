#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,-3,6,8,1,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    auto min = min_element(arr.begin(),arr.end());

    cout<<*min;

    return 0;
}
