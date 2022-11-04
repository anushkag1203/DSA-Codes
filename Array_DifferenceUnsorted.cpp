#include<iostream>
using namespace std;
int main(){
     int A[]={2,1,3,7};
    int B[]={7,8,1,6};
    int C[25];
    int k=0,n=4,m=4,flag;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<m;j++){
            if(A[i]==B[j]){
            flag=1;
            break;
            }
        }
        if(flag==0){
            C[k]=A[i];
            k++;
        }
        
    }
     for(int i=0;i<k;i++){
        cout<<C[i]<<" ";
     }
    return 0;}