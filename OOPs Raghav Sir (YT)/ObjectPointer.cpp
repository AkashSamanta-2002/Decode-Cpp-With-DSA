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
void change(Cricketer* c){
    c->name = "sourav Ganguly";
    c->runs = 24000;
    c->avg = 51.5;
}
int main(){
    Cricketer c1("Sachin Tendulkar",34000,55.3);

    Cricketer* ptr = &c1;
    
    cout<<"Before change : ";
    ptr->print();           //(*ptr).print(); 

    change(ptr);

    cout<<"After change : ";
    ptr->print();

    return 0;
}