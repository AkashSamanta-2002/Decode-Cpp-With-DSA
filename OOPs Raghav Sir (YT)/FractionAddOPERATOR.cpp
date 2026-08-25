#include<iostream>
using namespace std;
class Fraction{
public:
    int num;
    int den;

    Fraction(int num, int den){
        this->num = num;
        this->den = den;
    }

    void display(){
        cout<<this->num<<"/"<<this->den<<endl;
    }

    Fraction operator+(Fraction f){     // Operator Overloading
        int newNum = this->num*f.den + this->den*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }

};
int main(){
    Fraction f1(3,5);
    f1.display();
    Fraction f2(5,7);
    f2.display();

    //Fraction f3 = f1.add(f2);

    Fraction f3 = f1 + f2;      // By operator Overloading
    f3.display();

    cout<<(5/3)+(7/5);

    return 0;
}