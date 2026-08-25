#include<bits/stdc++.h>
using namespace std;

void permutation(string str, int idx) {
    if(idx==str.length()-1) {
        cout<<str<<" ";
        return;
    }

    unordered_set<char> s;
    for(int i=idx;i<str.length();i++) {
        // if(s.size()!=0 && s.find(str[i])!=s.end()) continue;
        if(s.count(str[i])) continue;
        s.insert(str[i]);
        
        swap(str[i], str[idx]);
        permutation(str, idx+1);
        swap(str[i], str[idx]);     // Backtracking
    }
}

int main() {
    string str;
    cout<<"Enter a string of unique characters: ";
    cin>>str;

    permutation(str, 0);

    return 0;
}