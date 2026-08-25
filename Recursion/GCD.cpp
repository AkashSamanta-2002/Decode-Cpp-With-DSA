#include<iostream>
using namespace std;

// int gcd(int a, int b){       // T.C -> O(n)
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;
// }

int gcd(int a, int b){
    int rem = b % a;
    if(rem==0) return a;
    return gcd(rem,a);  
}

int main(){
    int a = 27;
    int b = 45;
    int ans;
    ans = gcd(a,b);
    cout<<"The GCD of "<<a<<" and "<<b<<" is : "<<ans;
    return 0;
}