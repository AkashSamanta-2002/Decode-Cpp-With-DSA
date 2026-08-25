#include<iostream>
using namespace std;

void printsubset1( string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printsubset1(ans,original.substr(1));
    printsubset1(ans+ch,original.substr(1));
}

void printsubset2(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printsubset2(ans,original,idx+1);
    printsubset2(ans+ch,original,idx+1);
}
int main(){
    string str = "abc";
    printsubset1("",str);
    cout<<endl;
    printsubset2("",str,0);
    return 0;
}