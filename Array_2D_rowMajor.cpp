#include<iostream>
using namespace std;
int main(){
    int A[2][4];//A[m][n]
    A[0][0]=20, A[0][1]=21, A[0][2]=22, A[0][3]=23;
    //200         204        208          212
     A[1][0]=30, A[1][1]=31, A[1][2]=32, A[1][3]=33;
     //216         220          224          228
    //Address(A[i][j])=L(base address)+(i*n+j)*(size of dataType)
    return 0;}



 //For starting from index 
 #include<iostream>
using namespace std;
int main(){
    int A[2][4];//A[m][n]
    A[1][1]=20, A[1][2]=21, A[1][3]=22, A[1][4]=23;
    //200         204        208          212
     A[2][1]=30, A[2][2]=31, A[2][3]=32, A[2][4]=33;
     //216         220          224          228
    //Address(A[i][j])=L(base address)+(i*n+(j-1))*(size of dataType)
    return 0;}