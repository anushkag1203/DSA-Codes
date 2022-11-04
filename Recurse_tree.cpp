//A recursion where  recursion s called more than one times is called as tree recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    fun(4);
    return 0;} 