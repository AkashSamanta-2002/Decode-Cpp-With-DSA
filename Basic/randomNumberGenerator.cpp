#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 random(seed);

    uniform_int_distribution<> dist(1, 100);
    cout << dist(random);
    return 0;
}