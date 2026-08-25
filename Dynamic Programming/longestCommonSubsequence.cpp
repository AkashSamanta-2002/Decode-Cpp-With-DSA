#include <bits/stdc++.h>
using namespace std;

// pure recursive solution
int lcs(string str1, string str2, int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (str1[i] == str2[j])
        return 1 + lcs(str1, str2, i - 1, j - 1);
    else
    {
        return max(lcs(str1, str2, i, j - 1), lcs(str1, str2, i - 1, j));
    }
}

// memoization
int lcs(string &s1, string &s2, int i, int j, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s1[i] == s2[j])
        return dp[i][j] = 1 + lcs(s1, s2, i - 1, j - 1, dp);
    else
        return dp[i][j] = max(lcs(s1, s2, i - 1, j, dp), lcs(s1, s2, i, j - 1, dp));
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    cout << lcs(str1, str2, str1.length() - 1, str2.length() - 1);

    return 0;
}