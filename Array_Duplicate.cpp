 #include<iostream>
using namespace std;
int main(){
    int A[]={3,6,8,8,10,12,15,15,15,20,20,20};
    int n=12;
    int lastDuplicate=0;
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1] && A[i]!=lastDuplicate){//You can do this as in 'else' there is no condition you want to give....
           {
                cout<<A[i]<<" ";
                lastDuplicate=A[i];
            }
        }
    }
    return 0;}

//counting number of duplicates
 #include<iostream>
 using namespace std;
 int main(){
    int A[]={3,3,6,8,8,10,12,15,15,15,20,20,20};
     int n=13,j=0;
     int lastDuplicate=0;
     for(int i=0;i<n;i++){
         if(A[i]==A[i+1] && A[i]!=lastDuplicate){
          j=i+1;
          while(A[i]==A[j]){
             j++;
          }
          cout<<"Element: "<<A[i]<<" "<<"Repeated: "<<j-i<<endl;
          lastDuplicate=A[i];
         }
     }
     return 0;}

// TIME COMPLEXITY=O(n)


//2nd method
#include <iostream>
using namespace std;
int main()
{
    int A[] = {3, 3, 6, 8, 8, 10, 12, 15, 15, 15, 20, 20, 20};
    int n = 13, j = 0;
    int lastDuplicate = 0;
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }

  int temp[max+1]={0};
  for(int i=0;i<n;i++){
    temp[A[i]]++;
  }
  for(int i=0;i<max+1;i++){
    if(temp[i]>1)
    cout<<"Element: "<<i<<" "<<"Repeated: "<<temp[i]<<endl;
  }
    return 0;
}//TC n for max+n for incrementing temp+n for finding duplicate=O(3n)=O(n)