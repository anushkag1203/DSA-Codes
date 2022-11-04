#include <iostream>
using namespace std;
struct array
{
    int A[20];
    int length;
};
void display(struct array a)
{
    for (int i = 0; i < a.length; i++)
        cout << a.A[i] << " ";
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void fun(struct array *a)
{
    int i = 0, j = a->length - 1;
    while (j > i)
    {
        while (a->A[i] < 0)
        {
            i++;
        }
        while (a->A[j] > 0)
        {
            j--;
        }
        if (j > i)
        {
            swap(a->A[i], a->A[j]);
        } // this condition is imp as during last swap j<i and befor going to while loop it will interchange ...
    }
}
int main()
{
    array a = {{-6, 3, -8, 10, 5, -7, -9, 12, -4, 2}, 10};
    fun(&a);
    display(a);

    return 0;
}

// n+2 comparision due to 1 false condition checking i.e j<i;
// TIME COMPLEXITY O(n);



//2nd method
#include <iostream>
using namespace std;
struct array
{
    int A[15];
    int length;
};
void display(struct array a)
{
    for (int i = 0; i < a.length; i++)
        cout << a.A[i] << " ";
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void fun(struct array *a)
{
    int i = 0, j = a->length - 1;
    while (j > i)
    {
        while (a->A[i] > 0)
        {
            i++;
        }
        while (a->A[j] < 0)
        {
            j--;
        }
        if (j > i)
        {
            swap(a->A[i], a->A[j]);
        }
    }
}
int main()
{
    array a = {{-6, 3, -8, 10, 5, -7, -9, 12, -4, 2}, 10};
    fun(&a);
    display(a);
    return 0;
}