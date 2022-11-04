#include <iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Delete(int A[], int n)
{
    A[1] = A[n];
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
    for (int i = 1; i <= n - 1; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    int A[] = {0, 40, 30, 35, 15, 10, 34, 32};
    int n = 7;
    Delete(A, n);
    display(A, n);
    Delete(A, 6);
    display(A, 6);
    return 0;
}