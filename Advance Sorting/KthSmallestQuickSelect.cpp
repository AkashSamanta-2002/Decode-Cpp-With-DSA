#include<iostream>
using namespace std;

int pertition(int arr[], int si, int ei){
    int pivotele = arr[(si+ei)/2];
    int count = 0;

    for(int i=si;i<=ei;i++) if(pivotele>arr[i] && i!=(si+ei)/2) count++;

    int pi = si + count;

    swap(arr[pi], arr[(si+ei)/2]);

    int i = si, j = ei;

    while(i<pi && j>pi){
        if(arr[i]<pivotele) i++;
        else if(arr[j]>pivotele) j--;
        else if(arr[i]==pivotele && arr[j]==pivotele){
            i++;
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}

int quickSelect(int arr[], int si, int ei, int k){

    int pivotIdx = pertition(arr,si,ei);

    if(pivotIdx==k-1) return arr[pivotIdx];
    else if(pivotIdx>k-1) return quickSelect(arr,si,pivotIdx-1,k);
    else return quickSelect(arr,pivotIdx+1,ei,k);

}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cout<<"Enter k : ";
    cin>>k;

    int ans = quickSelect(arr,0,n-1,k);

    cout<<"The "<<k<<" th smallest element is : "<<ans;

    return 0;
}