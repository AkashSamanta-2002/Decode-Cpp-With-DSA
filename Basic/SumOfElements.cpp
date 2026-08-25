#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numbers : ";
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++) sum += i;

    cout<<"The sum of elements from 1 to "<<n<<" is : "<<sum;
    return 0;
}