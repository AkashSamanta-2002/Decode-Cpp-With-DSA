#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    int hp;
    int power;
    float speed;

    // Constructor
    Pokemon(string n, int h, int p, float s){
        name = n;
        hp = h;
        power = p;
        speed = s;
    }
};
void print(Pokemon p){
    cout<<"Name : "<<p.name<<endl;
    cout<<"HP : "<<p.hp<<endl;
    cout<<"Power : "<<p.power<<endl;
    cout<<"Speed : "<<p.speed<<endl;
    cout<<endl;
}

int main(){
    Pokemon p1("Pikchu", 70, 60, 85.5);

    // p1.name = "Pikachu";
    // p1.hp = 70;
    // p1.power = 60;
    // p1.speed = 85.5;

    print(p1);

    return 0;
}