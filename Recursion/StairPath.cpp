#include<iostream>
using namespace std;
int stair(int n){
    if(n==2 || n==1) return n;
    return stair(n-1) + stair(n-2);
}
int main(){
    int n;
    cout<<"Enter no of stair : ";
    cin>>n;

    cout<<"The number of path to climb the stair is : "<<stair(n);
    return 0;
}