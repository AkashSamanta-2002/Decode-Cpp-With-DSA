#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {-12,-34,-54,-23,-54,-423,-243,-45,-67,-97};
    int min = INT_MAX;
    for(int i=0;i<10;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"The minimum element is "<<min;
    return 0;
}