#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    
    /*pair<string,int> p1;
    p1.first = "Akash";
    p1.second = 20;
    m.insert(p1);*/ 
    
    /*pair<string,int> p1 = {"Akash",10};
    m.insert(p1);*/                         // we can also do this
    
    // Instead of this we can do simply

    m["Akash"] = 10;
    // cout<<m["Akash"]<<endl;
    

    m["Aditya"] = 20;
    m["Ashoke"] = 30;

    // cout<<m["Ashoke"]<<endl;

    // Printing
    for(auto ele : m) cout<<ele.first<<" "<<ele.second<<endl;

    string str = "anagram";
    unordered_map<char,int> m2;

    for(int i=0;i<str.length();i++){
        m2[str[i]]++;   // This insert the character and increase the frequency in value part
    }

    for(auto ele : m2){
        cout<<ele.first<<" : "<<ele.second<<endl;
    }


    return 0;
}