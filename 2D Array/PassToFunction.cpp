#include<iostream>
using namespace std;

void display(int nums[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cout<< nums[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return;
}

void change(int nums[3][3]){            // In 2d array size declaration while creating function is must
    nums[0][1] = 200;
    return;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    display(arr);
    change(arr);
    display(arr);

    return 0;
}