#include<iostream>
using namespace std;
int main(){
    char S[]="Nitin";
    int i,j,flag=0;

    for(i=0;S[i]!='\0';i++){

    }
    i=i-1;
    for(j=0;j<i;j++,i--){
        if(S[i]!=S[j]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"Not a palindrome";
    }
    else{
        cout<<"It's a palindrome";
    }
    return 0;}





