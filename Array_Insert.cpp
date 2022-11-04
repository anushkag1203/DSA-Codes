#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array a)
{
    for (int i = 0; i < a.length; i++)
        cout << a.A[i] << " ";
}
int insert(struct array *a, int index, int key)
{
    if (index < a->size || index >= 0)
    {
        for (int i = a->length; i > index; i--)
        {
            a->A[i] = a->A[i - 1];
        }
        a->A[index] = key;
        a->length++;
    }
    else
    {
        return -1;
    }
}
int main()
{
    array a = {{2, 3, 4, 5, 6, 7}, 10, 6};
    cout << "Original elments of array are:" << endl;
    display(a);
    cout << endl;
    int index, key;
    cout << "Enter the value of the index and key:" << endl;
    cin >> index >> key;
    insert(&a, index, key);
    cout << "Elements after adding new key:" << endl;
    display(a);
    return 0;
}

// TIME  COMPLEXITY
// If you insert an element at the end then no element has to move=O(1);
// If you insert an element at the start(0) then all  element has to move=O(n);