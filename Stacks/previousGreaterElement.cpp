#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];

    // Stack method
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.size()!=0 && arr[i]>=st.top()) st.pop();
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }

    for(int ele : ans) cout<<ele<<" ";
    return 0;
}