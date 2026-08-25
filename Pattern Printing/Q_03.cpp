/*
A
A B
A B C
A B C D
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) cout<<char(j+'A')<<" ";
        cout<<endl;
    }
    return 0;
}