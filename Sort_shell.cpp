#include<iostream>
using namespace std;
void shell(int A[],int n){
    int temp,j,i;
    for(int gap=n/2;gap>=1;gap=gap/2){
        for(int i=gap;i<n;i++){
            j=i-gap;
            temp=A[i];
            while(j>=0 && temp<A[j]){
                A[j+gap]=A[j];
                j=j-gap;
                A[j+gap]=temp;
            }
        }
    }
}
int main(){
    int A[]={5,1,4,2,3};
    int n=5;
    shell(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;}