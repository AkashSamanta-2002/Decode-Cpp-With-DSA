#include<iostream>
using namespace std;

// bool isPalindrome(string str){
//     int i = 0;
//     int j = str.length()-1;

//     while(i<=j){
//         if(str[i]!=str[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }

bool isPalindrome(string str, int i, int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return isPalindrome(str,i+1,j-1);
}

int main(){
    string str = "racecar";

   // cout<<isPalindrome(str);

    cout<<isPalindrome(str,0,str.length()-1);
    return 0;
}