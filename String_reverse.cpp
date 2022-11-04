#include <iostream>
using namespace std;
int main()
{
  char S[]="PYTHON";
  char B[20];
  int i,j;
  for(i=0;S[i]!='\0';i++){
  }
  i=i-1;
  for(j=0;i>=0;j++){
    B[j]=S[i];
    i--;
  }
  B[j]='\0';
  cout<<B;


    return 0;
}


#include<iostream>
using namespace std;
// void swap(char *x,char *y){
//     char temp=*x;
//     *x=*y;
//     *y=temp;

// }
void reverse(char S[]){
    int i;
    for(i=0;S[i]!='\0';i++){}
    for(int j=0;j<i/2;j++){
        swap(S[j],S[i-j-1]);//it is an inbuild swap function
    }
  cout<<S;
}

void reverse2(char *S){
    int i;
     for(i=0;S[i]!='\0';i++){}
     i=i-1;
     for(int j=0;j<i;j++,i--){
        swap(S[j],S[i]);
     }
     cout<<S;
}
int main(){
    char S[]="PYTHONS";
    reverse2(S);
    return 0;}