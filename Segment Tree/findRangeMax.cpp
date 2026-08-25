#include<bits/stdc++.h>
using namespace std;

vector<int> st;

void buildTree(vector<int>& arr, int idx, int lo, int hi) {
    if(lo==hi) {
        st[idx] = arr[lo];
        return;
    }
    
    int mid = (lo+hi)/2;
    buildTree(arr,2*idx+1,lo,mid);  // Left call
    buildTree(arr,2*idx+2,mid+1,hi);  // Right call

    st[idx] = max(st[2*idx+1], st[2*idx+2]);
}

int getMax(int idx, int lo, int hi, int& l, int& r) {
    // Base cases
    int mid = (lo+hi)/2;
    if(hi<l or lo>r) return INT_MIN;             // Outside
    else if(l<=lo and r>=hi) return st[idx];     // Equal or subset
    
    // else if((l<=hi or r>=lo) or (l>=lo and r<=hi))  // no need
    
    int leftMax = getMax(2*idx+1,lo,mid,l,r);
    int rightMax = getMax(2*idx+2,mid+1,hi,l,r);
    return max(leftMax, rightMax); 
}

int main() {
    vector<int> arr = {1,4,2,8,6,4,9,3};
    int n = arr.size();

    st.resize(4*n);

    buildTree(arr,0,0,n-1);  
    
    int q; cin>>q;

    while(q--) {
        int l,r;
        cout<<"Enter the range : ";
        cin>>l>>r;

        int ans = getMax(0,0,n-1,l,r);

        cout<<ans<<endl;
    }
    
    return 0;
}