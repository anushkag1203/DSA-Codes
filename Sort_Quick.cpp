#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int partation(int *A, int l, int h)
{int pivot = A[l];
    int i = l, j = h;
    
    do
    {
        do
        {
            i++;
        } while (pivot >= A[i]);
        do
        {
            j--;
        } while (pivot < A[j]);

        if (j > i)
        {
            swap(&A[i], &A[j]);
        }
    } while (j > i);
    swap(&A[l], &A[j]);
    return j;
}
void quicksort(int *A, int l, int h)
{
    int j;
    if (l < h)
    {
        j = partation(A, l, h);
        quicksort(A, l, j);
        quicksort(A, j + 1, h);
    }
}
int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, INT32_MAX};
    int n = 10;
    quicksort(A, 0, 10);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}