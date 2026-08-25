#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            tmax = smax;
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            tmax = smax;
            smax = arr[i];
        }
        else if(arr[i]>tmax && arr[i]!=smax) tmax = smax;
    }
    cout<<"Max : "<<max<<endl<<"Second max : "<<smax<<endl<<"Third max : "<<tmax;
    return 0;
}