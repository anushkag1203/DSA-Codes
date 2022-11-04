//where a single function is nested in each other....
#include<iostream>
using namespace std;
int fun(int n){
    if(n>100)
    {
        return n-10;
    }
    else{
        cout<<n<<" ";
        return fun(fun(n+11));
    }
}
int main(){
    fun(95);
    return 0;}