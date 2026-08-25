#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;

    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        vector<int> temp(i+1);
        ans.push_back(temp);
        for(int j=0;j<=i;j++){
            if(j==0 || i==j) ans[i][j] = 1;
            else ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++){
        for(int k=i;k<=n;k++) cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}