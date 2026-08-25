#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> x, pair<int,int>y){      //ele.first -> profit, ele.second -> weight
    double r1 = (x.first * 1.0)/(x.second * 1.0);
    double r2 = (y.first * 1.0)/(y.second * 1.0);
    return r1>r2;
}

double fractionKnapsack(vector<int> profit, vector<int> weights, int m, int n){
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++) arr.push_back({profit[i],weights[i]});       // Making an array in which we sort profit and weights according to the ratio 

    sort(arr.begin(),arr.end(),cmp);    // Sort using custom comparator

    double ans = 0;
    for(int i=0;i<n && m;i++){
        int p = arr[i].first;
        int w = arr[i].second;
        if(w<=m){
            ans += (p*1.0);
            m -= w;
        }
        else{
            double fraction = (m*1.0)/(w*1.0);
            ans += fraction * p;
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> profit = {25,24,15};
    vector<int> weights = {18,15,10};
    int n = profit.size();
    int m = 20;

    // double ans = 100/3;      // Explanation why *1.0
    // cout<<ans;

    cout<<fractionKnapsack(profit,weights,m,n);
    return 0;
}