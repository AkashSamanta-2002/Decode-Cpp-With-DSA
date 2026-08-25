#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int bestClosingTime(string customers) {
    int len = customers.length();

    vector<int> pen;
    int penalty = 0;

    for(int i=0;i<len;i++){       // YYYY
        penalty = 0;
        if(customers[i]=='Y') penalty++; //penalty = 0 
        for(int j=0;j<len;j++){
            if(j<i && customers[j]=='N') penalty++;
            else if(j>i && customers[j]=='Y') penalty++;
        }
        cout<<penalty<<" ";
        pen.push_back(penalty);     // pen = 3 2
    }
    penalty = 0;
    for(int i=0;i<len;i++) 
        if(customers[i]=='N'){
        penalty++;
        // cout<<customers[i]<<" = "<<penalty<<endl;
    }
    cout<<penalty<<endl;
    pen.push_back(penalty);
    
    int min = INT_MAX;
    int mindx = -1;
    for(int i=0;i<=len;i++){
        if(min>pen[i]){
            min = pen[i];
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