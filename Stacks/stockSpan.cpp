#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {100,80,101,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pgi[n];
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.size()!=0 && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        st.push(i);
        pgi[i] = i - pgi[i];
    }

    // for(int i=0;i<n;i++){
    //    pgi[i] = i - pgi[i];
    // }

    for(int ele : pgi) cout<<ele<<" ";
    return 0;
}