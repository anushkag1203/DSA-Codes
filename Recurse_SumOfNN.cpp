#include<iostream>
using namespace std;
int sumOfNN(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sumOfNN(n-1);
    }
}
int main(){
    cout<<sumOfNN(6);
    return 0;}