#include <iostream>
using namespace std;

int *Insert(int A[], int n)
{
    int i = n;
    int temp = A[n];
    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
   
        A[i]=temp;
    
}

void display(int A[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }

    cout<<endl;
}
int main()
{
    int n;
int HeapArray[]={0,40,30,15,20,10,12,6,5,50};
    
   
    n = 9;
    Insert(HeapArray, n);
    display(HeapArray, n);

    return 0;
}