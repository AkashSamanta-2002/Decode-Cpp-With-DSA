#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return;
}

void sort_negetive_positive(vector<int>& arr){
    int i = 0;
    int j = arr.size() - 1;
    while(i<j){
        if(arr[i]<0 && i<j) i++;
        if(arr[j]>=0 && i<j) j--;
        if(arr[i]>0 && arr[j]<0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return;
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

    sort_negetive_positive(v);

    // Printing vector
    
    display(v);

    return 0;
}