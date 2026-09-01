#include <bits/stdc++.h>
using namespace std;

// Memoize
string printLCS(string &s1, string &s2, int i, int j, vector<vector<string>> &dp)
{
    if (i < 0 || j < 0)
        return "";

    if (dp[i][j] != " ")
        return dp[i][j];

    if (s1[i] == s2[j])
        return dp[i][j] = printLCS(s1, s2, i - 1, j - 1, dp) + s1[i];
    else
    {
        string a = printLCS(s1, s2, i - 1, j, dp);
        string b = printLCS(s1, s2, i, j - 1, dp);
        if (a.length() > b.length())
            return dp[i][j] = a;
        else
            return dp[i][j] = b;
    }
}

// Tabulate
string printLCSTabulate(string &s1, string &s2)
{
    int m = s1.length();
    int n = s2.length();
    vector<vector<string>> dp(m, vector<string>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            string a = (i > 0 && j > 0) ? dp[i - 1][j - 1] : "";
            string b = (i > 0) ? dp[i - 1][j] : "";
            string c = (j > 0) ? dp[i][j - 1] : "";

            if (s1[i] == s2[j]) dp[i][j] = a + s1[i];
            else dp[i][j] = (b.length() > c.length()) ? b : c;
            
        }
    }

    return dp[m - 1][n - 1];
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    vector<vector<string>> dp(str1.length(), vector<string>(str2.length(), " "));
    // cout << printLCS(str1, str2, str1.length() - 1, str2.length() - 1, dp);
    cout << printLCSTabulate(str1, str2);
    return 0;
}