#include<iostream>
#include<vector>
using namespace std;

int fibo(int n, vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n]; // Means subproblem are already calculated and stored in the array index

    // Expanded
/*  int recAns = fibo(n-1,dp) + fibo(n-2,dp);
    dp[n] = recAns;
    return dp[n];   */

    // or we can do directly
    return dp[n] = fibo(n-1,dp) + fibo(n-2,dp);     // Storing the subproblems and return also
}

int main(){
    int n = 7;
    // Create a array for memoization of the overlapping subproblem
    vector<int> dp(n+1,-1);
    int ans = fibo(n,dp);
    cout<<ans;
    return 0;
}