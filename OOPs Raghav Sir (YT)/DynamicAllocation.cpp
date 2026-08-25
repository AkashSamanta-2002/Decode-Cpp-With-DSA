#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    // Constructor
    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    //Function
    void print(){
        cout<<"Name : "<<this->name<<", Runs : "<<this->runs<<", Average : "<<this->avg<<endl;
        cout<<endl;
    }
};
int main(){

    int* p = new int(4);    // Dynamic Allocation 
    //cout<<*p;

    Cricketer c1("Sachin Tendulkar",34000,55.3);    // Normal Allocation

    Cricketer* ptr = new Cricketer("Sachin Tendulkar",34000,55.3);  // Dynamic Allocation

    ptr->print();
    return 0;
}