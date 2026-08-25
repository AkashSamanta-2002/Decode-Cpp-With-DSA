#include<iostream>
using namespace std;

// void removechar(string ans, string original){        // This code is space consuming
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a' || ch=='A') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));
// }

void removechar(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='a' || ch=='A') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}
int main(){
    string str = "Akash Samanta";
    removechar("",str,0); 
    return 0;
}