// #include<iostream>
// using namespace std;
// int main(){
//     int A[]={6,3,8,10,16,7,5,2,9,14};
//     int n=10,k;
//     cout<<" Enter key: ";
//     cin>>k;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//         if(A[i]+A[j]==k){
//             cout<<A[i]<<" "<<A[j]<<endl;
//         }
//         }
//     }

//     return 0;}

// TC O(n^2)quadractic



//2nd method
#include <iostream>
using namespace std;
int main()
{
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int n = 10, k, max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    int temp[max + 1] = {0};

    cout << " Enter key: ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        temp[A[i]]++;
       
    }
    
    for(int i=0;i<n;i++){
   if(k-A[i]>0 && temp[k-A[i]]!=0){
    cout<<A[i]<<" "<<k-A[i]<<endl;
   temp [A[i]]--;
   }
    }
     return 0;
}