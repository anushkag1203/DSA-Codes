#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        int ans=n*factorial(n-1);
        return ans;
    }
}
int main(){
   cout<< factorial(5);
    return 0;}