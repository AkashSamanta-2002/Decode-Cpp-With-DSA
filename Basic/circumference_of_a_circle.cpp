#include<iostream>
#define pi 3.14159265359
using namespace std;
int main(){
    float r;
    cout << "Enter radius : ";
    cin >> r;
    float c = 2 * pi * r;
    cout << "The circumference of the circle is : " << c;
    return 0;
}