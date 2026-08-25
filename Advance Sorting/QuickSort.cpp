#include<iostream>
using namespace std;

int partition(int arr[], int si, int ei){   

    int pivotele = arr[(si+ei)/2];     
    int count = 0;              
    for(int i=si;i<=ei;i++) if(pivotele>arr[i] && i!=((si+ei)/2)) count++;

    int pi = si + count;        

    swap(arr[(si+ei)/2],arr[pi]);        
    
    int i = si, j = ei;         

    while(i<pi && j>pi){       
        if(arr[i]<pivotele) i++;
        else if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<pivotele){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else {
            i++;
            j--;
        }
    }
    return pi;
}

void quickSort(int arr[], int si, int ei){

    if(si>=ei) return;

    int pivotIdx = partition(arr,si,ei); 
    
    quickSort(arr,si,pivotIdx-1);   
    quickSort(arr,pivotIdx+1,ei);   

}

int main(){
    int arr[100];
    int n;

    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    quickSort(arr,0,n-1);

    cout<<endl;

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}