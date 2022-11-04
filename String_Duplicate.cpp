//USING THE COUNT METHOD
// #include<iostream>
// using namespace std;
// int main(){
//     char S[]="findingihqfnnil";
//     int i,count;
//     for(i=0;S[i]!='\0';i++){
//     }
    
//     for(int a=0;a<i-1;a++){
//         count=1;
//       if(S[a]!='#'){
//         for(int b=a+1;b<i;b++){
//             if(S[a]==S[b]){
//                 count++;
//                 S[b]='#';
//             }
//         }
//         if(count>1){
//             cout<<S[a]<<" for "<<count<<" times "<<endl;
//         }
//         }
//     }
//     return 0;}


    //USING THE HASH TABLE METHOD
    #include<iostream>
    using namespace std;
    int main(){
        char S[]="finding";
        int Temp[26]={0};
        for(int i=0;S[i]!='\0';i++){
            Temp[S[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(Temp[i]>1){
                cout<<char(i+97)<< "  "<<Temp[i]<<endl;
            }
        }
        return 0;}