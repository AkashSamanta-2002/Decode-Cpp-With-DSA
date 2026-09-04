#include <bits/stdc++.h>
using namespace std;

int lcstr(string s1, string s2, int i, int j, vector<vector<int>> &dp, int &ans)
{
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s1[i] == s2[j])
        dp[i][j] = 1 + lcstr(s1, s2, i - 1, j - 1, dp, ans);
    else
        dp[i][j] = 0;

    ans = max(ans, dp[i][j]);

    lcstr(s1, s2, i - 1, j, dp, ans);
    lcstr(s1, s2, i, j - 1, dp, ans);

    return dp[i][j];
}

int lcstrTabulate(string s1, string s2, vector<vector<int>> &dp)
{
    int m = s1.length();
    int n = s2.length();

    int ans = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int call = (i > 0 && j > 0) ? dp[i - 1][j - 1] : 0;

            if (s1[i] == s2[j])
                dp[i][j] = 1 + call;
            else
                dp[i][j] = 0;

            ans = max(ans, dp[i][j]);
        }
    }

    return ans;
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    int m = s1.length();
    int n = s2.length();

    vector<vector<int>> dp(m, vector<int>(n, -1));

    // Memoize
    // int ans = INT_MIN;
    // lcstr(s1, s2, m - 1, n - 1, dp, ans);
    // cout << ans << endl;

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++) cout<<dp[i][j];
    //     cout<<endl;
    // }
    
    // Tabulate
    cout<<lcstrTabulate(s1, s2, dp);
    
    return 0;
}