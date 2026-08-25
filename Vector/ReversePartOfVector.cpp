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

    int si,ei;
    cout<<"Enter start index : ";
    cin>>si;
    cout<<"Enter end index : ";
    cin>>ei;

    reverse(v,si,ei);

    display(v);
    
    return 0;
}