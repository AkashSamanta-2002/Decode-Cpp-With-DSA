#include<bits/stdc++.h>
using namespace std;

vector<int> st;

void buildSt(vector<int>& arr, int i, int lo, int hi) {

    if(lo==hi) {
        st[i] = arr[lo];
        return;
    }

    int mid = lo + (hi - lo)/2;
    buildSt(arr, 2*i+1, lo, mid);
    buildSt(arr, 2*i+2, mid+1, hi);

    st[i] = st[2*i+1] + st[2*i+2]; 
}

int findSum(int i, int lo, int hi, int& l, int& r) {
    if(hi<l or lo>r) return 0; 
    if(l<=lo and r>=hi) return st[i];

    int mid = lo + (hi - lo)/2;
    int leftSum = findSum(2*i+1,lo,mid,l,r);
    int rightSum = findSum(2*i+2,mid+1,hi,l,r);
    return leftSum + rightSum;
}

int main() {
    vector<int> arr = {1,4,2,8,6,4,9,3};
    int n = arr.size();
    
    st.resize(4*n);

    buildSt(arr,0,0,n-1);
    
    int l, r;
    cout<<"Enter l and r : ";
    cin>>l>>r;

    cout<<findSum(0,0,n-1,l,r)<<endl;

    return 0;
}