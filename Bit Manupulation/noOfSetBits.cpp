#include<iostream>
using namespace std;

int setBitsCount(int n){
    
    // return __builtin_popcount(n);   // Built in function of c++
    
    int count = 0;
    
    // Method - 1
    // while(n!=0){
    //     if(n&1==1) count++;
    //     n = n>>1;
    // }
    
    // Method - 2
    
    while(n!=0){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"The number of set bits in "<<n<<" is : "<<setBitsCount(n);
    return 0;
}