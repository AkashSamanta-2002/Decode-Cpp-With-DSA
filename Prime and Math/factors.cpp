#include<iostream>
#include<cmath>
using namespace std;

void printFactors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<" ";
        }
        cout<<endl;
    }
    return;
}

void printFactors2(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }

    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
    return;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    printFactors2(n);

    return 0;
}