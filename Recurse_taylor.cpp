// #include<iostream>
// using namespace std;
// int main(){
//     double x,K=1,sum=0;
//     cin>>x;
// for(int n=0;n<15;n++){
//     sum=sum+K;
//     K=(K*(x))/(n+1);
// }
// cout<<sum;
//     return 0;}

#include<iostream>
using namespace std;
float taylor(float a,float n){
    static float p=1,f=1;
    
    if(n==0){
        return 1;
    }
    else{
        float r=taylor(a,n-1);
        p=p*a;
        f=f*n;
        return r+(p/f);
    }
}
int main(){
    cout<<taylor(4,15);
    return 0;}

// #include<iostream>
// using namespace std;
// float taylor(float x,float n){
//     static float r=1;
// if(n==0){
//     return r;
// }
// else{
//     r=1+(x/n)*r;
//     return taylor(x,n-1);
// }
// }
// int main(){
//     cout<<taylor(1,15);
//     return 0;}