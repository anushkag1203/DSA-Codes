#include<iostream>
using namespace std;
int main(){
    char S[]="WELCOME";
    char S1[]="home";
    
  //lower case
  for(int i=0;S[i]!='\0';i++){
    if(S[i]>=65 && S[i]<=90){
      S[i]=S[i]+32;
    }
  }
 cout<<S<<endl;
  //UPPER CASE
 for(int i=0;i<S1[i]!='\0';i++){
  if(S1[i]>=97 && S1[i]<=122){
    S1[i]=S1[i]-32;
  }
 }
 cout<<S1;
  
   return 0;}


