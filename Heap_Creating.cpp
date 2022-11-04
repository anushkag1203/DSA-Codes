#include<iostream>
using namespace std;
 void insert(int A[],int n){
    int i=n;
    int temp=A[n];
    while(i>1 && temp>A[i/2]){//i/2 is considered as we compare it with the parent and for any node the parent is at index/2 
    A[i]=A[i/2];
    i=i/2;
    }
    
        A[i]=temp;
    }
 
 void display(int A[],int n){
    for(int i=1;i<=n;i++){
        cout<<A[i]<<" ";
    }

 }
int main(){
    int A[]={0,10,20,30,25,5,40,35};
    int n=7;
    for(int i=2;i<=n;i++){
        insert(A,i);
    }
    display(A,n);
    return 0;}