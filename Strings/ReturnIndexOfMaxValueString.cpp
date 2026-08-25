#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> v = {"0123","0023","0000000000004562","940","2901"};

    int max = stoi(v[0]);
    int idx = 0;
    for(int i=1;i<v.size();i++){
        int x = stoi(v[i]);
        if(x>max){
            max = x;
            idx = i;
        } 
    }

    cout<<max<<" String is : "<<v[idx];
    return 0;
}