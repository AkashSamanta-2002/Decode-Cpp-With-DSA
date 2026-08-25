#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {999,1000,54,23,54,1000,243,45,901,900};
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i=0;i<10;i++){

        if(max<arr[i]){
            second_max = max;
            max = arr[i];
        }
        else if(second_max<arr[i] && arr[i]!=max) second_max = arr[i];

    }
    cout<<"The second largest element is "<<second_max;
    return 0;
}