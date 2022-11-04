// USING SI,PLE COMPARING
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      char S1[] = "decimal";
//      char S2[] = "medicalf";
//      int i, j, flag;

//     for (i = 0; S1[i] != '\0'; i++){}
//     for (j = 0; S2[j] != '\0'; j++){}

//     if (i == j)
//     {
//         for (int a = 0; a < i; a++)
//         {
//             flag = 0;
//             for (int b = 0; b < j; b++)
//             {
//                 if (S1[a] == S2[b])
//                 {
//                     flag = 1;
//                 }
//             }
//             if (flag == 0)
//             {
//                 break;
//             }
//         }

//         if (flag == 0)
//         {cout << "Not an Anagram";}
//         else
//         {cout << "it is an anagram";}
//     }

//     else{ cout<<"Not an anagram";}
//     return 0;
// }

// but this program takes O(n^2);

// USING HASH TABLE

#include <iostream>
using namespace std;
int main()
{
    char S1[] = "decimal";
    char S2[] = "mkdical";
    int i, j; 
    
    int temp[26] = {0};

    for(i=0;S1[i]!='\0';i++){
        temp[S1[i]-97]++;
    }
    for(j=0;S2[j]!='\0';j++){
        temp[S2[j]-97]--;
        if( temp[S2[j]-97]<0){
            cout<<"Not Anagram";
            break;
        }
    }
    if(S2[j]=='\0'){
        cout<<"Is Anagram";
    }



   
        

    return 0;
}