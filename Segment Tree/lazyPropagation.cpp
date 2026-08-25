#include<bits/stdc++.h>
using namespace std;

vector<int> st;
vector<int> lazy;

void buildSt(vector<int>& arr, int i, int lo, int hi) {

    if(lo==hi) {
        st[i] = arr[lo];
        return;
    }

    int mid = lo + (hi - lo)/2;
    buildSt(arr,2*i+1,lo,mid);
    buildSt(arr,2*i+2,mid+1,hi);

    st[i] = st[2*i+1] + st[2*i+2]; 
}

int findSum(int i, int lo, int hi, int l, int r) {
    // check for pending lazy
    if(lazy[i]!=0) {
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize * lazy[i];
        if(lo!=hi) {
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }

    if(hi<l or lo>r) return 0; 
    if(l<=lo and r>=hi) return st[i];

    int mid = lo + (hi - lo)/2;
    int leftSum = findSum(2*i+1,lo,mid,l,r);
    int rightSum = findSum(2*i+2,mid+1,hi,l,r);
    return leftSum + rightSum;
}

void updateRange(int i, int lo, int hi, int l, int r, int val) {
    // check for pending lazy
    if(lazy[i]!=0) {
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize * lazy[i];
        if(lo!=hi) {
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }

    if(hi<l or lo>r) return;

    // update entire [lo, hi]
    if(l<=lo and r>=hi) {
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize * val;
        if(lo!=hi) {
            lazy[2*i+1] += val;
            lazy[2*i+2] += val;
        }
        return;
    }

    int mid = lo + (hi - lo)/2;
    updateRange(2*i+1,lo,mid,l,r,val);
    updateRange(2*i+2,mid+1,hi,l,r,val);

    st[i] = st[2*i+1] + st[2*i+2];
}

int main() {
    vector<int> arr = {1,4,2,8,6,4,9,3};
    int n = arr.size();
    
    st.resize(4*n);
    lazy.resize(4*n,0);

    buildSt(arr,0,0,n-1);
    
    // int l, r;
    // cout<<"Enter l and r : ";
    // cin>>l>>r;

    // cout<<findSum(0,0,n-1,l,r)<<endl;

    // int inc;
    // updateRange(i,0,n-1,l,r,inc);

    // updateRange(0,0,n-1,2,7,5);
    // cout<<findSum(0,0,n-1,1,5)<<endl;
    // updateRange(0,0,n-1,1,5,2);
    // cout<<findSum(0,0,n-1,1,5)<<endl;

    cout<<findSum(0,0,n-1,1,3)<<endl;
    updateRange(0,0,n-1,2,5,10);
    cout<<findSum(0,0,n-1,1,3)<<endl;

    return 0;
}