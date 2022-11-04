//A[i]=L+i*(size of datatype)
#include<iostream>
using namespace std;
int main(){
    int A[]={2,3,4,5};
    for(int i=0;i<4;i++){
        cout<<&A[i]<<" ";
    }
    return 0;}

   