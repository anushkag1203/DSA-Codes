//A recursion where a function A calls another recursive function.

#include<iostream>
using namespace std;
int funB(int n);
int funA(int n){
    if(n==0)
    return 0;
    else{
        cout<<n<<" ";
        funB(n-1);
    }
}
int funB(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<n<<" ";
return funA(n/2);
    }
}
int main(){
    funA(10);
    
    return 0;}