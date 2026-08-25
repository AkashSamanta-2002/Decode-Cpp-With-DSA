#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    // Constructor
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }

    // Functions
    void print(){
        cout<<"Name : "<<this->name<<", "<<"Runs : "<<this->runs<<endl;
        cout<<endl;
    }

    int matches(float avg){
        return this->runs/avg;
    }

};
int main(){

    Cricketer c1("Sachin Tendulkar",34000);
    Cricketer c2("Virat Kohli",27000);

    c1.print();
    c2.print();

    int avg1 = c1.matches(55.5);
    int avg2 = c2.matches(51.7);

    cout<<"Average 1 : "<<avg1<<", Average 2 : "<<avg2;

    return 0;
}