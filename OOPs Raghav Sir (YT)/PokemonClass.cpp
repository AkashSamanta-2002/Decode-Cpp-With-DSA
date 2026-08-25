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