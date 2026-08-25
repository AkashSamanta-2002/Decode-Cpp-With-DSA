#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    // Taking input
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

    return 0;
}