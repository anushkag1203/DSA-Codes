#include<iostream>
using namespace std;
int head(int n){
    if(n==0)
    return 0;
    else{
        head(n-1);
        cout<<n<<" ";
    }
}
int main(){
    head(5);
    return 0;}