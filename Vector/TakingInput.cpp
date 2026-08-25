#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int>v;

    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    // Taking input
    cout<<"Enter all elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // Printing vector
    
    display(v);

    return 0;
}