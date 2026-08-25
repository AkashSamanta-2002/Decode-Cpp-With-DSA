#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "Akash Samanta";

    reverse(str.begin(),str.end());

    cout<<str<<endl<<endl;

    string s1 = "abcdrefgh";

    reverse(s1.begin()+2,s1.end());

    cout<<s1<<endl<<endl;

    string s2 = "abcdefgh";
    reverse(s2.begin()+3,s2.end()-2);
    cout<<s2<<endl<<endl;

    string s3 = "abcdefghij";
    reverse(s3.begin()+4,s3.begin()+9);
    cout<<s3;

    return 0;
}