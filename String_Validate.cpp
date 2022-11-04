#include<iostream>
using namespace std;
bool validate(char  password[]){
    for(int i=0;password[i]!='\0';i++){
        if(!(password[i]>=65 && password[i]<=90) && !(password[i]>=97 && password[i]<=122) && !(password[i]>=48 && password[i]<=57)){
            return false;
        }
    }
    return true;
}
int main(){

   char password[]="Anu#1203";

   cout<< validate(password);
    return 0;}