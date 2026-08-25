#include<iostream>
#include<vector>
using namespace std;
void storesubset(string ans, string original, vector<string>& v, int idx){
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    storesubset(ans,original,v,idx+1);
    storesubset(ans+ch,original,v,idx+1);
}
int main(){
    string str = "abc";
    vector<string>v;
    storesubset("",str,v,0);

    for(string el : v){
        cout<<el<<endl;
    }
    return 0;
}