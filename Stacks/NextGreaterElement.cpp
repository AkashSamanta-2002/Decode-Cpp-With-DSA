#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {4,1,2,5,4,3,4,8,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];

    // Brute Force
    // for(int i=0;i<n;i++){
    //     ans[i] = -1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]<arr[j]){
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }
    
    // Stack method

    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(st.size()!=0 && arr[i]>=st.top()) st.pop();
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }

    for(int ele : ans) cout<<ele<<" ";
    return 0;
}