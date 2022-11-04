#include<iostream>
using namespace std;
int tail(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<n<<" ";
        return tail(n-1);
    }
}
int main(){
    
    return 0;}