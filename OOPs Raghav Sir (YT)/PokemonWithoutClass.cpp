#include<iostream>
#include "PokemonClass.cpp"
using namespace std;

int main(){
    Pokemon p1("Pikachu",70,100,99.99);
    
    cout<<p1.name<<endl;
    cout<<p1.hp<<endl;
    cout<<p1.power<<endl;
    cout<<p1.speed<<endl;

    return 0;
}