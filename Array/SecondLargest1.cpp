#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {898,12,54,23,54,423,243,45,89,900};
    int max = INT_MIN;
    
    for(int i=0;i<10;i++){
        if(max<arr[i]) max = arr[i]; 
    }

    int second_max = INT_MIN;

    for(int i=0;i<10;i++){
        if(second_max<arr[i] && max!=arr[i]){
            second_max = arr[i];
        } 
    }

    cout<<"The second largest element is "<<second_max;
    return 0;
}