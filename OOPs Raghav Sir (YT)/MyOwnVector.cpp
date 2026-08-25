#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    // Constructor
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    // Functions
    void add(int val){
        if(capacity==size){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++) arr2[i] = arr[i];
            arr = arr2;
        }
        arr[size++] = val;
    }

    void remove(){
        if(size==0) cout<<"The array is empty"<<endl;
        else size--;
    }

    int get(int idx){
        if(size==0){
            cout<<"The array is empty"<<endl;
            return -1;
        }
        if(idx>=size || idx<0){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void print(){
        for(int i=0;i<size;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Vector v;
    v.add(1);
    v.add(2);
    v.add(3);
    v.add(4);
    v.add(5);
    v.add(6);

    v.print();

    v.remove();
    v.remove();

    v.print();

    cout<<v.get(7)<<endl;
    cout<<v.get(2)<<endl;
    cout<<v.get(-3)<<endl;

    return 0;
}