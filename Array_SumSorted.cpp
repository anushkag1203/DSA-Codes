#include<iostream>
using namespace std;
int main(){
    int A[]={1,3,4,5,6,8,9,10,12,14};
    int n=10;
    int i=0,j=n-1,k;
    cout<<"Enter key: ";
    cin>>k;
    while(j>i){

           if(A[i]+A[j]==k){
      cout<<A[i]<<" "<<A[j]<<endl;
      i++;j--;
        }
       else if(A[i]+A[j]>k){
            j--;
        }
        else if(A[i]+A[j]<k){
            i++;
        }
     
    }
    return 0;}

    //TC O(n);



//2nd method
#include<iostream>
using namespace std;
int main(){
    int A[]={1,3,4,5,6,8,9,10,12,14};
    int n=10;
    int k;
    cout<<"Enter key: ";
    cin>>k;
   
for(int i=0,j=n-1;i<j;){
           if(A[i]+A[j]==k){
      cout<<A[i]<<" "<<A[j]<<endl;
      i++;j--;
        }
       else if(A[i]+A[j]>k){
            j--;
        }
        else if(A[i]+A[j]<k){
            i++;
        }
     
    }
    return 0;}
