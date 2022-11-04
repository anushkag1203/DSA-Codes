#include<iostream>
using namespace std;
int main(){
    char S[]="Painter";
    char S1[]="Painter";

    int i=0,j=0,flag=0;
    while(S[i]!='\0' && S1[j]!='\0'){
        if(S[i]==S1[j]){
            i++;j++;
        }
        else{
           flag=1;
           break;
        }
    }
    if(flag==1){
        cout<<"Not same";
    }
    else{
        cout<<"Same";
    }
    return 0;}