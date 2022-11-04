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
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int move_to_front(struct array *a, int key)
{
    for (int i = 0; i < a->length; i++)
    {
        if (a->A[i] == key)
        {
            swap(a->A[i], a->A[0]);
            return i;
        }
    }
    return -1;
}
int main()
{
    array a = {{2, 56, 98, 75, 34, 21, 90, 11}, 8};
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    cout << move_to_front(&a, key) << endl;
    display(a);
    return 0;
}