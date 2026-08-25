#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {-12,-34,-54,-23,-54,-423,-243,-45,-67,-97};
    int max = INT_MIN;
    for(int i=0;i<10;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"The maximum element is "<<max;
    return 0;
}