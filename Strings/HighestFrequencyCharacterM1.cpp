#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int n = str.length();

    vector<int> alpha(26,0);
    for(int i=0;i<n;i++){
        if(str[i] >= 'a' && str[i] <= 'z'){  // Ignore spaces and non-alphabetic characters
            int idx = str[i] - 97;
            alpha[idx]++;
        }
    }
    char ch;
    int ans = INT_MIN;;
    for(int i=0;i<26;i++){
        ch = (ans<alpha[i])? ((char)(i+97)) : ch;
        ans = max(ans,alpha[i]);
    }
    cout<<ch<<" "<<ans;

    return 0;
}