#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
};
void print(Cricketer c){
    cout<<"Name : "<<c.name<<", "<<"Runs : "<<c.runs<<endl;
    cout<<endl;
}
int main(){
    Cricketer c1("Sachin Tendulkar",34000);
    Cricketer c2("Virat Kohli",27000);


    print(c1);
    print(c2);

    return 0;
}