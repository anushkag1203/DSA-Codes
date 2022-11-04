#include<iostream>
using namespace std;
int gcd(int a,int n){
    if(a%n==0){
        return n;
    }
    else{
        return gcd(n,a%n);
    }
}
int main(){
    cout<<gcd(32,24);
    return 0;}