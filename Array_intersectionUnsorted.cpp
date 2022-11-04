#include<iostream>
using namespace std;
int main(){
    int A[]={2,6,3,1};
    int B[]={8,1,7,2};
    int n=4,m=4,k=0;
    int C[20];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(A[i]==B[j]){
           C[k]=A[i];
           k++;
           }
        }
    }
     for(int i=0;i<k;i++){
        cout<<C[i]<<" ";
     }
    return 0;}