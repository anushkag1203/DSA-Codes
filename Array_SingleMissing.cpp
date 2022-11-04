//Iterative
#include<iostream>
using namespace std;
struct array{
    int A[15];
    int length;
};
int missing(struct array a){
    float sum=(a.A[a.length-1]*(a.A[a.length-1]+1))/2;
    float sum2=0;
    for(int i=0;i<a.length;i++){
     sum2=sum2+a.A[i];
    }
    if(sum2<sum){
        return sum-sum2;
    }
    return -1;
}
int main(){
    array a={{1,2,3,4,5,6,8,9,10,11,12},11};
 cout<<missing(a);
    return 0;}



//recursive 2nd method
#include<iostream>
using namespace std;

int sum(int A[],int n){
   if(n==0){
    return 0;
   }
   else{
 return A[n-1]+sum(A,n-1);
   }
}
int sum2(int n){
    int s=(n*(n+1))/2;
    return s;
}
int main(){
  int  a[]={1,2,3,4,5,6,7,8,9,11,12};
  int n=11;
   sum(a,n);
   sum2(a[10]);
   if(sum(a,n)<sum2(a[10])){
    cout<<sum2(a[10])-sum(a,n);
   }
    return 0;}



//3rd
#include<iostream>
using namespace std;
struct array{
    int A[15];
    int length;
};
int missing_element(struct array a){
    int i=0;
    while(a.A[i]-i==a.A[0]){
        i++;
    }  
        return a.A[0]+i;
}
int main(){
   array a={{6,7,8,9,10,11,12,14,15},8};
    cout<<"Missing element : "<<missing_element(a);
    return 0;}

    //TIME COMPLEXITY O(n);
