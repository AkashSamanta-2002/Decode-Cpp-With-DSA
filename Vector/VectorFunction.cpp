#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

vector<int> change(vector<int> arr){
    arr.push_back(2);
    arr.push_back(20);
    arr.push_back(200);
    return arr;
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

    vector<int> ans = change(v);

    display(ans);
    display(v);

    return 0;
}