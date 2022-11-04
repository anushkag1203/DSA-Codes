#include<iostream>
using namespace std;
void merge(int *A,int l,int h){
int mid=(l+h)/2;
 int i=l,j=mid+1,k=l;
 int C[25];
 while(i<=mid && j<=h){
    if(A[i]<A[j]){
        C[k]=A[i];
        k++;i++;
    }
    else if(A[i]>A[j]){
        C[k]=A[j];
        k++;j++;
    }
   
 }
  for(;i<=mid;i++){
        C[k]=A[i];
        k++;
    }
    for(;j<=h;j++){
        C[k]=A[j];
        k++;
    }
 for(i=l;i<=h;i++){//transfer all B into A
    A[i]=C[i];
 }
}
void mergeSort(int A[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        merge(A,l,h);
    }
}
int main(){
    int A[]={8,2,9,6,5,3,7,4};
    mergeSort(A,0,7);

    for(int a=0;a<8;a++){
    cout<<A[a]<<" ";
 }
    return 0;}