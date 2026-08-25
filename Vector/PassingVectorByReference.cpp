#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>& a){        // Use of ampercant(&) operator 
    a[0] = 100;
    for(int i=0;i<a.size();i++){    // 100 22 35 41  
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(22);
    v.push_back(35);
    v.push_back(41);

    for(int i=0;i<v.size();i++){    // 1 22 35 41 
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);

    for(int i=0;i<v.size();i++){    // 100 22 35 41 -> Change  so now vectors are passed by reference 
        cout<<v[i]<<" ";            // by use of & operator
    }
    cout<<endl;
    
    return 0;
}