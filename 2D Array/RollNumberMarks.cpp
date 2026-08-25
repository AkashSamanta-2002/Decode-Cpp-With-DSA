#include<iostream>
using namespace std;

int main(){
    int r,c=2;
    cout<<"Enter number of students : ";
    cin>>r;

    int marks[r][c];
    for(int i=0;i<r;i++){
        cout<<"Enter roll number then marks : ";
        for(int j=0;j<c;j++){
            cin>>marks[i][j];
        }
    }
    for(int i=0;i<r;i++){
        cout<<"Roll number : ";
        for(int j=0;j<c;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}