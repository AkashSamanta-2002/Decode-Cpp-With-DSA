#include<iostream>
using namespace std;
void permutation(string ans, string original){
    int n = original.length();
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        string leftstring = original.substr(0,i);
        string rightstring = original.substr(i+1);
        permutation(ans+original[i],leftstring+rightstring);
    }
}
int main(){
    string str = "abc";
    //permutation("",str);

    cout<<str.substr(0,1)<<endl;
    cout<<str.substr(2);
    return 0;
}