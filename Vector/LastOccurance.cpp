#include<iostream>
#include<vector>
using namespace std;

// void change(vector<int>a){
//     a[0] = 100;
//     for(int i=0;i<a.size();i++){    // 100 22 35 41  
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
int main(){
    vector<int>v;

    cout<<"Enter seven elements : ";
    for(int i=0;i<7;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int key;
    cout<<"Enter the key element : ";
    cin>>key;

    int ans = -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v.at(i)==key){
            ans = i;
            break;
        }
    }

    if(ans==-1) cout<<key<<" is not present in the vector";
    else cout<<"The last occurance of "<<key<<" is in index : "<<ans;
    return 0;
}