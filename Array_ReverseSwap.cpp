#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int length;
};
void display(struct array a)
{
    for (int i = 0; i < a.length; i++)
        cout << a.A[i] << " ";
}
int swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void reverse(struct array *a)
{
    for (int i = 0; i < a->length / 2; i++)
    {
        swap(a->A[i], a->A[a->length - i - 1]);
    }
}
int main()
{
    array a = {{2, 3, 4, 5, 6, 7, 8}, 7};
    cout << "Orignal list : ";
    display(a);
    cout << endl;
    reverse(&a);
    cout << "Reversed list : ";
    display(a);
    return 0;
}