#include<bits/stdc++.h>
using namespace std;

void permutation(string original, string per) {
    if(original=="") {
        cout<<per<<" ";
        return;
    }

    for(int i=0;i<original.size();i++) {
        permutation(original.substr(0,i)+original.substr(i+1), per+original[i]);
    }
}

int main() {
    string str;
    cout<<"Enter a string of unique characters: ";
    cin>>str;

    permutation(str, "");

    return 0;
}