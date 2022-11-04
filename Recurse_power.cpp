// #include<iostream>
// #include<cmath>
// using namespace std;
// int power(int a,int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         int ans=a*power(a,n-1);
//         return ans;
//     }
// }
// int main(){
//     cout<<"Value from function: "<<power(5,3)<<endl;
//     cout<<"Value from library: "<<pow(5,3)<<endl;
//     return 0;}


#include<iostream>
using namespace std;
int power(int a,int n){
    if(n==0){
       return 1;
    }
    else{
        if(n%2==0){
         return   power(a*a,n/2);
        }
        else{
          return   a*power(a*a,(n-1)/2);
        }
    }
}
int main(){
    cout<<power(2,0);
    return 0;}