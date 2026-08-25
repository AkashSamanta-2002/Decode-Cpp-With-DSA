#include<iostream>
using namespace std;

class MinHeap{
public:
    int idx;
    int arr[50];

    MinHeap(){
        idx = 1;
    }

    int top(){
        return arr[1];
    }

    void push(int val){
        arr[idx] = val;

        for(int i=idx;arr[i]<arr[i/2] && i>1;i=idx/2){
            swap(arr[i],arr[i/2]);
        }
        idx++;
    }

    int size(){
        return idx-1;
    }

    void pop(){
        if(!size()){
            cout<<"Empty";
            return;
        }

        idx--;
        arr[1] = arr[idx];

        // Rearranging

        int i = 1;
        while(true){
            int l = 2*i, r = 2*i+1;
            if(l>idx) break;
            else if(r>idx){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                break;
            } 
            else if(arr[l]<arr[r]){ 
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                else break;
            }
            else{
                if(arr[i]>arr[r]){
                    swap(arr[i],arr[r]);
                    i = r;
                }
                else break;
            } 
        }   
        return;
    }

    void display(){
        for(int i=1;i<idx;i++) cout<<arr[i]<<" ";
        return;
    }
};

int main(){
    MinHeap pq;
    
    pq.push(10);
    pq.push(2);
    pq.push(14);
    pq.push(11);
    pq.push(1);
    pq.push(4);
    cout<<"Top : "<<pq.top()<<endl;
    cout<<"Size : "<<pq.size()<<endl;
    pq.pop();
    cout<<"Top : "<<pq.top()<<endl;
    cout<<"Size : "<<pq.size()<<endl;
    pq.pop();
    cout<<"Top : "<<pq.top()<<endl;
    cout<<"Size : "<<pq.size()<<endl;
    return 0;
}