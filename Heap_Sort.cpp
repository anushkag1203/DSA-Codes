#include <iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void  Delete(int A[], int n)
{
    int c[15],k=0,flag=0;
    int val=A[1];
    A[1] = A[n];
    A[n]=val; 
    int i = 1;
    int j = 2 * i;
  while (j <= n - 1)
    {
        if (j < n - 1 && A[j + 1] > A[j])
        {
            j = j + 1;
        }

        if (A[j] > A[j + 1])
        {

            swap(A[i], A[j]);
            i = j;
            j = 2 * i;
        }
        else
        {
            break;
        }
    }
 
    
}
void display(int A[], int n)
{
    for (int i = 1; i <=n ; i++)
    {
        cout << A[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int C[15],k=0;
    int A[] = {0, 40, 30, 35, 15, 10, 25, 33};
    int n = 7;
    for(int i=n;i>0;i--){
        Delete(A, i);
       k++;
    }
   display(A, k);


    return 0;
}