#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[50];
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int>v(n,0);  // 0 means not visited
    int x = 0;

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<min){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;   // 1 means visited
        x++;
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}