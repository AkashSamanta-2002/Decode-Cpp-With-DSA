#include<iostream>
#include<vector>
using namespace std;

vector<long long> fact(int n){
    vector<long long> ans(n+1,1);
    int c = 1000000000 + 7;
    for(int i=1;i<=n;i++){
        ans[i] = ((i%c) * (ans[i-1]%c)) % c;
    }
    return ans;
}

int main(){
    vector<long long> res = fact(25);
    
    for(int i=0;i<res.size();i++) cout<<i<<"! = "<<res[i]<<endl;
    return 0;
}