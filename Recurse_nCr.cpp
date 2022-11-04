#include<iostream>
using namespace std;
int nCr(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*nCr(x-1);
    }
}
   float ans(float n,float r){
    float a,b,c;
    a=nCr(n);
    b=nCr(r);
    c=nCr(n-r);
    return a/(b*c);
   }


int main(){
   cout<<ans(7,3); 
    return 0;}