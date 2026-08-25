#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;

    string str1 = "aditya";
    string str2 = "akash";

    for(int i=0;i<str1.length();i++){
        m1[str1[i]]++;   // This insert the character and increase the frequency in value part
    }
    for(int i=0;i<str2.length();i++){
        m2[str2[i]]++;   // This insert the character and increase the frequency in value part
    }


    int flag = 1;

    for(auto ele : m1){
        char ch = ele.first;
        int freq1 = ele.second;

        if(m2.find(ch)!=m2.end()){
            int freq2 = m2[ch];
            if(freq1!=freq2){
                cout<<"Not Anagram";
                flag = 0;
                break;
            }
        }
        else{
            cout<<"Not Anagram";
            flag = 0;
            break;
        }
    }

    if(flag==1) cout<<"Anagram";
    return 0;
}