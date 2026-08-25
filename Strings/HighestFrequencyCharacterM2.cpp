#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    // Creating special array
    vector<int> arr(26,0);

    for(int i=0;i<str.length();i++){
        int ch = str[i];
        int ascii = (int)ch;

        arr[ascii-97]++;

    }
    int max = 0;
    
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<max<<" "<<ch<<endl;
        }
    }

   
    return 0;
}