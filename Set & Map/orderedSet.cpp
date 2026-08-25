#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(3);
    s.insert(1);
    s.insert(8);
    s.insert(4);
    s.insert(1);

    for(auto ele : s) cout<<ele<<" ";   // Always in ascending order 

    return 0;
}