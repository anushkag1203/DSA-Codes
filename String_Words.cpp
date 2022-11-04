#include<iostream>
using namespace std;
int main(){
    char S[]="How are  you";
    int word=1;
   for(int i=0;S[i]!='\0';i++){
    if(S[i]==' ' && S[i-1]!=' '){// but if some times we give more space like 2 insted then the ans will be worng so only consider that
        word++;   // space where previous i was not a space
    }
   }
   cout<<word;
    return 0;}

