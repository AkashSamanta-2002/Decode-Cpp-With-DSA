#include<iostream>
#include<cmath>
using namespace std;

// int binaryToDecimal(int n){
//     int sum = 0;
//     int i = 0;
//     while(n!=0){
//         int ld = n%10;
//         sum += (ld * pow(2,i));
//         n /= 10;
//         i++;
//     }
//     return sum;
// }

int binaryToDecimal(string str){
    int res = 0;
    int n = str.length();
    for(int i=n-1;i>=0;i--){
        char bit = str[i];
        int num  = bit - '0';
        int bitPosi = n-i-1;
        res += num * (1<<bitPosi);
    }
    return res;
}

int main(){
    // int n;
    // cout<<"Enter a number : ";

    // By entering string    
    string n;
    cout<<"Enter the number : ";
    cin>>n;
    
    cout<<binaryToDecimal(n);
    return 0;
}