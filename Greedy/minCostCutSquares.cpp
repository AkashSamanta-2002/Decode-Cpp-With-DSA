#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

bool cmp(ll x, ll y){
    return x>y;
}

ll minCost(vector<ll> verticle, vector<ll> horizontal){
    sort(verticle.begin(),verticle.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int v = 0, h = 0, vblock = 1, hblock = 1;

    ll cost = 0;
    while(v<verticle.size() && h<horizontal.size()){
        if(verticle[v]>horizontal[h]){
            cost += verticle[v] * vblock;
            cout<<"verticle : "<<verticle[v] <<" "<< vblock<<" "<<cost<<endl;
            hblock++;
            v++;
        }
        else{
            cost += horizontal[h] * hblock;
            cout<<"horizontal : "<<horizontal[v] <<" "<< hblock<<" "<<cost<<endl;
            vblock++;
            h++;
        }
    }
    while(v<verticle.size()){
        cost += verticle[v] * vblock;
        cout<<"verticle : "<<verticle[v] <<" "<< vblock<<" "<<cost<<endl;
        hblock++;
        v++;
    }
    
    while(h<horizontal.size()){
        cost += horizontal[v] * hblock;
        cout<<"horizontal : "<<horizontal[v] <<" "<< hblock<<" "<<cost<<endl;
        vblock++;
        h++;
    }
    return cost;
}

int main(){
    int m = 6, n = 4;
    vector<ll> verticle = {2,3,1,1,4};
    vector<ll> horizontal = {4,1,2};

    cout<<minCost(verticle,horizontal);

    return 0;
}