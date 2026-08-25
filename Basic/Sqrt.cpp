#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = false;

    for(int i=1;i<n/2;i++){
        if(i*i==n){
            cout<<i;
            flag = true;
            break;
        }
    }
    if(flag==false) cout<<"No integer square root";
    return 0;
}