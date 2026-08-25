#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the row and column size : ";
    cin>>r>>c;
    int matrix[r][c];

    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    // By while loop

    // int rmin = 0, rmax = r-1;
    // int cmin = 0, cmax = c-1;
    // while(rmin<=rmax && cmin<=cmax){
    //     int k = cmin;
    //     while(k<=cmax && rmin<=rmax){
    //         cout<<matrix[rmin][k]<<" ";
    //         k++;
    //     }
    //     rmin++;
    //     k = rmin;
    //     while(k<=rmax && cmin<=cmax){
    //         cout<<matrix[k][cmax]<<" ";
    //         k++;
    //     }
    //     cmax--;
    //     k = cmax;
    //     while(k>=cmin && rmin<=rmax){
    //         cout<<matrix[rmax][k]<<" ";
    //         k--;
    //     }
    //     rmax--;
    //     k = rmax;
    //     while(k>=rmin && cmin<=cmax){
    //         cout<<matrix[k][cmin]<<" ";
    //         k--;
    //     }
    //     cmin++;
    // }

    // By for loop

    int minr = 0, maxr = r-1;
    int minc = 0, maxc = c-1;

    int te = r * c;
    int count = 0;
    while(maxr>=minr && maxc>=minc){
        // Right
        for(int j=minc;j<=maxc && count<te;j++){
            cout<<matrix[minr][j]<<" ";
            count++;
        }
        minr++;
        // Down
        for(int i=minr;i<=maxr && count<te;i++){
            cout<<matrix[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // Left
        for(int j=maxc;j>=minc && count<te;j--){
            cout<<matrix[maxr][j]<<" ";
            count++;
        }
        maxr--;
        // Top
        for(int i=maxr;i>=minr && count<=te;i--){
            cout<<matrix[i][minc]<<" ";
            count++;
        }
        minc++;
    }

    return 0;
}