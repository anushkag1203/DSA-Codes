#include<iostream>
using namespace std;
int main(){
    char S[]="How are you";
    int vcount=0,ccount=0;
    for(int i=0;S[i]!='\0';i++){
        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' || S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U' ){
                vcount++;
        }
        else if((S[i]>='a' && S[i]<='z') ||(S[i]>='A' && S[i]<='Z')){//this condition is important as if we only wrie else and ccount++ then it 
            ccount++;                                    //will also add the spaces
        }
    }
    cout<<"No of vowels:"<<vcount;  
    cout<<"\nNo of consonents:"<<ccount;
    return 0;}



    