#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    int hp;
    float speed;
};
class ElectricType{
public:
    string attack;
};
class NormalType{
public:
    string power;
};
class GroundType : public Pokemon, ElectricType, NormalType{
public:
    bool ThuderAttack;
};
int main(){
    GroundType g;
    g.name = "Onex";
    cout<<g.name;
    return 0;
}