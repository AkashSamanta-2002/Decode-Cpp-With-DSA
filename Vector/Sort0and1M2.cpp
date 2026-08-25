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
void sort01(vector<int>& arr){
    int i = 0;
    int j = arr.size() - 1;
    while(i<j){
        
        if(arr[i]==0 && i<j) i++;
        if(arr[j]==1 && i<j) j--; 
        if(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);        // 0 1 0 0 1 1 1 0 0 1 1 0
            i++;
            j--;
        } 
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

    sort01(v);
    
    display(v);
    
    return 0;
}