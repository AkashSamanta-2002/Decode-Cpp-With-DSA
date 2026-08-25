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
    Pokemon p1("Pikachu", 70, 60, 85.5);

    Pokemon p2 = p1;        // Deep copy
    p2.name = "Raichu";

    Pokemon p3(p1);     // Default copy constructor
    p3.name = "Raichu"; // Deep copy


    print(p1);
    print(p2);
    print(p3);

    return 0;
}