// Intersection ....To print only common elements between two arrays
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int l;
};
void Insertion(struct array a, struct array b)
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
    for (int b = 0; b < k; b++)
    {
        cout << C[b] << " ";
    }
}
int main()
{
    array a = {{3, 4, 5, 6, 10, 14, 15}, 7};
    array b = {{2, 4, 6, 7, 12}, 5};
    Insertion(a, b);

    return 0;
}
