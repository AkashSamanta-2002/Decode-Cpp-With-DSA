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
int main(){
    Pokemon p1, p2, p3;

    p1.name = "Pikachu";
    p1.hp = 70;
    p1.power = 60;
    p1.speed = 85.5;

    p2.name = "Charizard";
    p2.hp = 85;
    p2.power = 90;
    p2.speed = 77.7;

    p3.name = "Infernape";
    p3.hp = 80;
    p3.power = 85;
    p3.speed = 81.7;

    print(p1);
    print(p2);
    print(p3);
    return 0;
}