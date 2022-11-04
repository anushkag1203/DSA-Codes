#include<iostream>
using namespace std;
void merging(int A[],int B[],int m,int n){
    int C[25];
    int k=0,i=0,j=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
        C[k]=A[i];
        k++;i++;
        }
        else if(A[i]>B[j]){
            C[k]=B[j];
            k++;j++;
        }
    }
   for(;i<m;i++){
    C[k]=A[i];
    k++;
   }
   for(;j<n;j++){
    C[k]=B[j];
    k++;
   }
   for(int a=0;a<k;a++){
   cout<<C[a]<<" ";
   }
}
int main(){
    int A[]={2,10,18,20,23};
    int B[]={4,9,19,25};
    merging(A,B,5,4);
    return 0;}