#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<cmath>
using namespace std;

int main(){
    string str = "Raghav is a maths teacher. He is a DSA mentor also.";
    stringstream s(str);
    string temp;
    vector<string>v;

    while(s>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int maxcount = 1;

    for(int i=1;i<v.size();i++){
        int count = 1;
        if(v[i]==v[i-1]) count++;

        if(maxcount<count){
            maxcount = count;
        }
    }

    for(int i=1;i<v.size();i++){
        int count = 1;
        if(v[i]==v[i-1]) count++;

        if(count==maxcount) cout<<v[i]<<" "<<maxcount<<endl;
    }

    
    return 0;
}