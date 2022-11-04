#include<iostream>
using namespace std;
void insertion(int *A,int n){
    int x,j;
    for(int i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while (x<A[j] && j>=0)
        {
           A[j+1]=A[j];
           j--;
        }
        A[j+1]=x;
    }

}
int main(){
    int A[]={8,5,7,3,2};
    int n=5;
    insertion(A,n);
    for(int i=0;i<n;i++){
   cout<<A[i]<<" ";
    }
    
    return 0;}
    
    //Bydeafult adaptive
    //stable  ...made for link list as no need to shift it.
    //TC=O(n)(Comparisions)ascendng
    //TC=O(n^2)(Comparisions)descendng
    //swap=O(1)ascendng
    //swap=O(n^2)descendng