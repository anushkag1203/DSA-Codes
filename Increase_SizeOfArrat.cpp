//Size of the Array can be increased with the help of the heap.
#include<iostream>
using namespace std;
int main(){
    int *A,*B;
    A=new int[4];
    A[0]=1,A[1]=2,A[2]=3,A[3]=4;
    B=new int[8];
    for(int i=0;i<8;i++){
        B[i]=A[i];
    }
    B[4]=5,B[5]=6,B[6]=7,B[7]=8;
    delete []A;//deleted the memory taken by A (unused memory to stop memory leak);
    A=B;//A ponting on B
    B=NULL;//Both A and B pointing on same array so removing B;
for(int i=0;i<8;i++){
cout<<A[i]<<" ";
}
    return 0;}