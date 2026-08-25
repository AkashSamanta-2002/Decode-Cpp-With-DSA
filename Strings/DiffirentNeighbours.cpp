#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);

    int count = 0;
    int n = str.length();
    for(int i=0;i<n;i++){
        if(n==1) break;         // This is a special case if we dont give this the ans of
        if(i==0){               // any 1 character is given 1 because it count \0 as it's neighbouring character and increase the count by 1  
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==n-1){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]) count++;
    }

    cout<<count;
    return 0;
}