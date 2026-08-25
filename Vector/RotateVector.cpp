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
void reverse(vector<int>& arr, int i, int j){
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;

    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);

    int k;
    cout<<"Enter the number of steps : ";
    cin>>k;

    k = k % n;

    // Algorithm - 1
    // reverse(v,0,n-1);
    // reverse(v,0,k-1);
    // reverse(v,k,n-1);

    // Algorithm - 2 
    reverse(v,0,n-k-1);
    reverse(v,n-k,n-1);
    reverse(v,0,n-1);

    display(v);
    
    return 0;
}