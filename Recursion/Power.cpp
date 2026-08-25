#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    if(a==0) return 0;
    return (a * power(a,b-1));
}
    
int main(){
    int a,b;
    cout<<"Enter base and power : ";
    cin>>a>>b;
    if(a==0 && b==0) cout<<a<<"^"<<b<<" is not defined";
    else{
        int ans = power(a,b);
        cout<<a<<"^"<<b<<" = "<<ans;
    }
    
    return 0;
}