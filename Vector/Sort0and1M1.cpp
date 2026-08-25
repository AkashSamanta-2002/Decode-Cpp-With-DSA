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
    int noz = 0;
    int no1 = 0;

    for(int i=0;i<arr.size();i++){
        if(arr.at(i)==0) noz++;
        else no1++;
    }
    for(int i=0;i<arr.size();i++){
        if(i<noz) arr[i]=0;
        else arr[i]=1;
    }
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