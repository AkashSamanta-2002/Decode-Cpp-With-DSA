#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=1,b=1,sum = a+b;
    cout<<1<<" "<<1<<" ";
    for(int i=3;i<=n;i++){
        cout<<sum<<" ";
        a = b;
        b = sum;
        sum = a + b;
    }   
    return 0;
}