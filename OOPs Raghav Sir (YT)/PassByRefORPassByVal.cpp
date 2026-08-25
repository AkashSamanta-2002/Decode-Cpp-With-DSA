#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    int hp;
    int power;
    float speed;
};
void print(Pokemon p){
    cout<<"Name : "<<p.name<<endl;
    cout<<"HP : "<<p.hp<<endl;
    cout<<"Power : "<<p.power<<endl;
    cout<<"Speed : "<<p.speed<<endl;
    cout<<endl;
}
void change(Pokemon p){         // Objects are passed by values 
    p.name = "Raichu";
    p.hp = 100;
    p.power = 100;
    p.speed = 99.99;
}
int main(){
    Pokemon p1;

    p1.name = "Pikachu";
    p1.hp = 70;
    p1.power = 60;
    p1.speed = 85.5;

    change(p1);
    print(p1);

    return 0;
}