// UNION  ....to consider all the elements and the double to be considered once
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int l;
};
void Union(struct array a, struct array b)
{
    int i = 0, j = 0, k = 0;
    int C[20];
    while (i < a.l && j < b.l)
    {
        if (a.A[i] > b.A[j])
        {
            C[k] = b.A[j];
            k++;
            j++;
        }
        else if (a.A[i] < b.A[j])
        {
            C[k] = a.A[i];
            k++;
            i++;
        }
        if (a.A[i] == b.A[j])
        {
            C[k] = b.A[j];
            k++;
            j++;
            i++;
        }
    }
    for (; i < a.l; i++)
    {
        C[k] = a.A[i];
        k++;
    }
    for (; i < b.l; i++)
    {
        C[k] = b.A[j];
        k++;
    }
    for (int b = 0; b < k; b++)
    {
        cout << C[b] << " ";
    }
}
int main()
{
    array a = {{3, 4, 5, 6, 10, 14, 15}, 7};
    array b = {{2, 4, 6, 7, 12}, 5};
    Union(a, b);

    return 0;
}