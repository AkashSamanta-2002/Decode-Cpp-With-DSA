#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    fun(n-1);
    return;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    fun(n);
    return 0;
}