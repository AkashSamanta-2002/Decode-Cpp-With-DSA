#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {2,5,6,3,1,10,8,9,-2,2,-4,3,-6,-10,2,-5,-9};
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<17;i++){
        if(min>arr[i]){
            smin = min;
            min = arr[i];
        }
        else if(min!=arr[i] && arr[i]<smin) smin = arr[i];
    }

    cout<<"The minimum element in the array is "<<min<<" and the second minimum element is "<<smin;
    return 0;
}