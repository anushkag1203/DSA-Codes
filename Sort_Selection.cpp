// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[] = {8, 6, 3, 2, 5, 4};
//     int n = 6,t;
//     int k;
//     for (int i = 0; i < n - 1; i++)
//     {
//         k = A[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             if (A[j] < k)
//             {
//                 k = A[j];
//             }
//         }    
//          for (int a = 0; a < n; a++)
//          {
//             if (k == A[a])
//              {
//                 t=A[i];
//                 A[i]=A[a];
//                 A[a]=t;
//              }
//         }
        
//     }
//     for (int a = 0; a < n; a++){
//         cout<<A[a]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int A[] = {2,1,3,4,5,6};
    int n = 6,t;
    int k;
    for (int i = 0; i < n - 1; i++){
        for(int j=k=i;j<n;j++){
            if(A[k]>A[j]){
           k=j;
            }
        }
        t=A[i];
        A[i]=A[k];
        A[k]=t;
    }

    for(int j=0;j<n;j++){
cout<<A[j]<<" ";
    }
    
    return 0;}

//TC=O(n^2)(Comparision)
//swqap=O(n)
//pass=n-1;
//for n elements after k passes we get k small elements
//not stable ant adaptive too..