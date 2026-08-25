#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    int hp;
    float speed;

    virtual void sound(){
        cout<<"Poke"<<endl;
    }
};
class ElectricType : public Pokemon{
public:
    string attack;
    
    void sound(){
        cout<<"Ele"<<endl;
    }
};
class NormalType : public Pokemon{
public:
    string power;

    void sound(){
        cout<<"Norm"<<endl;
    }
};
class GroundType : public Pokemon{
public:
    bool ThuderAttack;

    void sound(){
        cout<<"Groun"<<endl;
    }
};
int main(){
    Pokemon* g = new GroundType;         // For this declaration the sound give poke if virtual function was not used
    g->sound();

    Pokemon* e = new ElectricType;
    e->sound();

    Pokemon* n = new NormalType;  
    n->sound();

    Pokemon* p = new Pokemon;       // If virtual keyword is not used the output will be 4 poke
    p->sound();

    return 0;
}