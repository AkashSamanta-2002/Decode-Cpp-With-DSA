#include<iostream>
using namespace std;

int powerlog(int x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    int ans = powerlog(x,n/2);
    if(n%2==0) return ans * ans;
    else return ans * ans * x;
}

int main(){
    int x, n;
    cout<<"Enter base and power : ";
    cin>>x>>n;

    cout<<powerlog(x,n);
    return 0;
} 