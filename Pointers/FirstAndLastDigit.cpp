#include<iostream>
using namespace std;
void find(int n, int* fd, int* ld){   
    *ld = n % 10;
    while(n>9) n /= 10;
    *fd = n;
    return;
}
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int fd, ld;
    find(n,&fd,&ld);
    cout<<"First Digit : "<<fd<<endl<<"Last Digit : "<<ld;
    return 0;
}