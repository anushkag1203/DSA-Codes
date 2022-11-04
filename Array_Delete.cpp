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
void deleting(struct array *a, int index)
{
    if (index < a->length || index >= 0)
    {
        for (int i = index; i < a->length - 1; i++)
        {
            a->A[i] = a->A[i + 1];
        }
        a->length--;
    }
}
int main()
{
    array a = {{2, 3, 4, 5, 6, 7}, 10, 6};
    cout << "Original list of elements: " << endl;
    display(a);
    cout << endl;
    int index;
    cout << "Entre the value of index to be removed:" << endl;
    cin >> index;
    deleting(&a, index);
    cout << "the list of elements after deleting:" << endl;
    display(a);

    return 0;
}

//TIME COMPLEXITY
//Here if 0th index is deleted then all elements have to move=O(n);
//Here if last index is deleted then no elements has to move=O(1);