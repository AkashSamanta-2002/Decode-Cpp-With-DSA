#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;      // Base case
    return n * fact(n-1);           // Recursive call
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans = fact(n);
    cout<<n<<"! = "<<ans;
    return 0;
}