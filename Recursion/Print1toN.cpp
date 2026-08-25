#include<iostream>
using namespace std;
void print(int n){           // Without any extra variable
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
    return;
}

// void print(int n, int i){           // With an extra variable
//     if(i>n) return;
//     cout<<i<<endl;
//     print(n,i+1);
//     return;
// }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(n);   // Without any extra variable
    //print(n,1);   // With an extra variable
    return 0;
}