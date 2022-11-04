#include<iostream>
using namespace std;
int main(){
    int x[4][3] ={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    cout<<(x+3)<<endl;//gives the address
    cout<<*(x+3)<<endl;//gives the address
    cout<<*(*(x+2)+2)<<endl;//gives the value as we make use of double '*' x[2][2]
    cout<<*(*(x+2)+3)<<endl;//gives the value as we make use of double '*' as [2][2]+1==[3][0] for the following question
    cout<<(*(x+2)+3)<<endl;//gives the address as [2][2]+1==[3][0] for the following question
    cout<<*(*(x+3)+3)<<endl;//gives the value
 return 0;}