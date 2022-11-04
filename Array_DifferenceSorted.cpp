//DIFFERENCE ....to print those elementsof array A which are not common with elements of array B
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int l;
};
void Difference(struct array a, struct array b)
{
    int i = 0, j = 0, k = 0;
    int C[20];
    while (i < a.l && j < b.l)
    {
        if (a.A[i] > b.A[j])
        {
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
            j++;
            i++;
        }
    }
    for (; i < a.l; i++)
    {
        C[k] = a.A[i];
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
    Difference(a, b);

    return 0;
}