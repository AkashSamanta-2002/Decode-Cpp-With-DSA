#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++) fact *= i;
    return fact;
}

int ncr(int n, int r){      
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    cout<<"Enter number of row and columns : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int k=i;k<=n;k++) cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}