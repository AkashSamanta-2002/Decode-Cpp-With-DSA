#include<iostream>
using namespace std;
void subset(string ans, string original, int idx, bool flag){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(original.length()==1){
        if(flag==true) subset(ans,original,idx+1,true);
        subset(ans+ch,original,idx+1,true);
        return;
    }
    char dh = original[idx+1];
    if(ch==dh){
        if(flag==true) subset(ans+ch,original,idx+1,true);
        subset(ans,original,idx+1,false);
    }
    else{
        if(flag==true) subset(ans+ch,original,idx+1,true);
        subset(ans,original,idx+1,true);
    }
}
int main(){
    string str = "aab";
    subset("",str,0,true);
    return 0;
}