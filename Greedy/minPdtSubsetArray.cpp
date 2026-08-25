// #include<iostream>
// #include<climits>
// #include<vector>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int minPdtSubset(vector<int> arr){
    int n = arr.size();
    int nc = 0, zc = 0;
    int maxNeg = INT_MIN;
    int minPos = INT_MAX;
    int posPdt = 1;
    int negPdt = 1;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zc++;
        else if(arr[i]<0){
            nc++;
            negPdt *= arr[i];
            maxNeg = max(maxNeg,arr[i]);
        }
        else if(arr[i]>0){
            posPdt *= arr[i];
        }
    }

    if(nc==0 && zc!=0) return 0;
    else if(nc==0 && zc==0){
        int min = *min_element(arr.begin(),arr.end());
        return min;
    }
    if(nc%2==0) return (negPdt*posPdt)/maxNeg;
    else return (negPdt*posPdt);
}

int main(){
    vector<int> arr = {1,2,5,3,10};
    cout<<minPdtSubset(arr);
    return 0;
}