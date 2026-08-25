#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str1 = "akash";
    string str2 = "kshaa";

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    cout<<str1<<endl<<str2<<endl;

    if(str1==str2) cout<<true;
    else cout<<false;  
    return 0;
}