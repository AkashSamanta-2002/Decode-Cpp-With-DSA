#include<iostream>
using namespace std;
class Scooty{
public:
    int topspeed;
    float milage;


private:
    int tank;
};
class Bike : public Scooty{
public:
    int gears;

    Bike(int t, float m, int g){
        topspeed = t;
        milage = m;
        gears = g;
    }

    void print(){
        cout<<this->topspeed<<" "<<this->milage<<" "<<this->gears<<endl;
        cout<<endl;
    }
};
int main(){
    Bike b(120,75.5,4);
    b.print();
    return 0;
}