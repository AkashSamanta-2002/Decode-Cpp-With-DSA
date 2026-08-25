#include<iostream>
#include<vector>
using namespace std;
void generete(string str, int opening, int closing, vector<string>& ans, int n){
    if(closing==n){
        ans.push_back(str);
        return;
    }
    if(opening<n) generete(str+'(',opening+1,closing,ans,n);
    if(opening>closing) generete(str+')',opening,closing+1,ans,n);
}
int main(){
    int n = 3;
    vector<string>v;

    generete("",0,0,v,n);

    for(string ele : v) cout<<ele<<" ";

    return 0;
}