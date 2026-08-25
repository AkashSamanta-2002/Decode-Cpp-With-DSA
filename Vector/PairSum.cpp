#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   vector<vector<int>>ans;
   for(int i=0;i<n-1;i++){
      vector<int>temp;
      for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==s){
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
         }
      }
   }
   return ans;
}
int main(){
    vector<int>v = {2,-3,3,3,-2};
    vector<vector<int>>ans = pairSum(v,0);
    for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans.size();j++){
        cout<<ans[i][j];
    }
    }
    return 0;
}