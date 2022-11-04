#include<iostream>
using namespace std;
void merg(int *A,int l,int h){
    int mid=(l+h)/2;
    int i=0,j=mid+1,k=l;
    int B[20];
   while(i<=mid && j<=h){
    if(A[i]<A[j]){
   B[k]=A[i];
   k++;i++;
    }
    if(A[i]>A[j]){
   B[k]=A[j];
   k++;j++;
    }
   }
   for(;i<=mid;i++){
    B[k]=A[i];
    k++;
   }
   for(;j<=h;j++){
    B[k]=A[j];
    k++;
   }
   
   for(i=l;i<=h;i++){
    A[i]=B[i];
 }
}
int main(){
    int A[]={2,5,8,12,3,6,7,10};
    merg(A,0,7);
    for(int a=0;a<8;a++){
    cout<<A[a]<<" ";
   }
    return 0;}