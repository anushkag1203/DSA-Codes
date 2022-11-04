#include <iostream> //method 1
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

void reverse(struct array *a, int *b)
{
    for (int i = 0; i < a->length; i++)
    {
        a->A[i] = b[a->length - i - 1];
    }
}
int main()
{
    array a = {{2, 3, 4, 5, 6, 7, 8}, 7};
    cout << " Original array list : ";
    display(a);
    int B[a.length];
    for (int i = 0; i < a.length; i++)
    {
        B[i] = a.A[i];
    }
    cout << endl;
    reverse(&a, B);
    cout << "Reversed list : ";
    display(a);

    return 0;
}