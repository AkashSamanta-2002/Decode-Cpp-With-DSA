#include<iostream>
#include<vector>
#include<climits>
using namespace std;

    int bestClosingTime(string customers) {
        int len = customers.length();

        vector<int>pre(len+1);
        vector<int>suf(len+1);
        
        pre[0] = 0;
        for(int i=1;i<=len;i++) {
            if(customers[i-1]=='N') pre[i] = pre[i-1] + 1;
            else pre[i] = pre[i-1];
        }

        cout<<endl;

        suf[len] = 0;
        for(int i=len-1;i>=0;i--){
            if(customers[i]=='Y') suf[i] = suf[i+1] + 1;
            else suf[i] = suf[i+1];
        }

        for(int i=0;i<=len;i++){
            pre[i] += suf[i];
            cout<<pre[i]<<" ";
        }

        int min = INT_MAX;
        int mindx = -1;
        for(int i=0;i<=len;i++){
            if(min>pre[i]){
                min = pre[i];
                mindx = i;
            }
        }
        return mindx;
    }

int main(){
    string c = "YYNY";
    cout<<endl<<bestClosingTime(c);
    return 0;
}