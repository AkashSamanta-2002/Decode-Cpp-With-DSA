#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(4);
    s.insert(15);
    s.insert(2);
    s.insert(9);
    cout<<s.size()<<endl;
    for(int ele : s) cout<<ele<<" ";
    cout<<endl;
    
    // insert same elements
    s.insert(2);
    s.insert(10);
    
    cout<<s.size()<<endl;
    for(int ele : s) cout<<ele<<" ";
    
    cout<<endl;
    
    int target = 15;
    (s.find(target)!=s.end())? cout<<"Exists" : cout<<"Doesn't exist";

    /* Because s.find() finds the element in the set and if didn't find that it
     returns s.end() which is the next element of the last element in the set */


    return 0;
}