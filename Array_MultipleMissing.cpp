#include<iostream>
using namespace std;
int main(){
    int A[]={6,7,8,9,11,12,16,17,18,19};
    int n=10,l=A[0];
    int diff=l-0;
    for(int i=0;i<n;i++){
        if((A[i]-i)!=diff){
            if((A[i]-i)-diff==1){
                cout<<i+diff<<" ";
                 diff=A[i]-i;
            }
            else{
                for(int a=diff;a<(A[i]-i);a++){
                    cout<<i+a<<" ";
                    diff=A[i]-i;
                }
               
            }
        }
    }
    return 0;}



//2nd method
#include<iostream>
using namespace std;
int main(){
     int A[]={6,7,8,9,11,12,15,16,17,19};
    int n=10,l=A[0];
    int diff=l-0;
    for(int i=0;i<n;i++){
        if((A[i]-i)!=diff){
            while(diff<(A[i]-i)){
                cout<<diff+i<<" ";
                diff++;
            }
            diff=A[i]-i;
        }
    }
    
    return 0;}

    //TIME COMPLEXITY=O(n)