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
void append(struct array *a, int key)
{
    if (a->length < a->size)
        a->A[a->length] = key;
    a->length++;
}
int main()
{
    array a = {{2, 3, 4, 5, 6, 7}, 10, 6};
    cout << "Original elements list" << endl;
    display(a);
    cout << endl;
    int key;
    cout << "Enter the key :" << endl;
    cin >> key;
    append(&a, key);
    cout << "List of elements aftter appending key" << endl;
    display(a);
    return 0;
}

// TIME  COMPLEXITY
// here the key is append so no element has to move=O(1);