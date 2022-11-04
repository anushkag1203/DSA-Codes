#include<iostream>
using namespace std;
int powerof(int a,int n){
   static int count=0;
    if(a/n==0){
return count;
    }
    else{
        ++count;
        return powerof(a/n,n);
    }
}
int main(){
    cout<<powerof(125,5);
    return 0;}