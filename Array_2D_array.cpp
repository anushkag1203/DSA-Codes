#include<iostream>
using namespace std;
int main(){
    int A[2][3];
    A[0][0]=1, A[0][1]=13, A[0][2]=16;
     A[1][0]=19, A[1][1]=10, A[1][2]=11;
     int B[][3]={{1,2,3},{5,7,8}};
     int *C[2];
     C[0]=new int[1];
     C[1]=new int[2];
     C[0][0]=90,C[1][0]=91,C[1][1]=34;
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
     }
     cout<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
     }
     cout<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<i+1;j++){
            cout<<C[i][j]<<" ";
        }
     }
    return 0;}