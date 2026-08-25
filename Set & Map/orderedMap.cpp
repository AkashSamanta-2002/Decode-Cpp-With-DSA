#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> m1;

    m1[2] = 30;
    m1[1] = 20;
    m1[3] = 10;

    for(auto ele : m1) cout<<ele.first<<" ";   // Always in ascending order according to the key
    cout<<endl;
    for(auto ele : m1) cout<<ele.second<<" ";  
    cout<<endl;
    for(auto ele : m1) cout<<ele.first<<" : "<<ele.second<<endl;
    
    

    map<string,int> m2;

    m2["Soumalya"] = 2;
    m2["Akash"] = 3;
    m2["Pallab"] = 1;

    for(auto ele : m2) cout<<ele.first<<" : "<<ele.second<<endl;

    if(m2.find("Akash")!=m2.end()) cout<<"Exists"<<endl;

    char ch = ' ';
    cout<<(int)ch;

    return 0;
}