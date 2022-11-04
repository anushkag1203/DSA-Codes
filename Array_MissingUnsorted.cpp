#include<iostream>
using namespace std;
int main(){
    int A[]={3,7,4,9,12,6,1,11,2,10};
    int n=10;
    int max=A[0];
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    int tem[max]={0};
    for(int i=0;i<n;i++){
    tem[A[i]]++;
    }
    for(int i=1;i<max;i++){
        if(tem[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;}



//2nd method
#include<iostream>
using namespace std;
int main(){
    int A[]={6,9,13,11,10};
    int n=5;
    int max=A[0];
    int min=A[0];
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min>A[i]){
            min=A[i];
        }
    }
    
    int tem[max]={0};    
     for(int i=0;i<n;i++){
    tem[A[i]]++;
    }
    for(int i=min;i<max;i++){
        if(tem[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;}