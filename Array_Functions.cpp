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
int get(struct array a, int index)
{
    return a.A[index];
}
int set(struct array *a, int index, int key)
{
    a->A[index] = key;
}
int maximum(struct array a)
{
    int max = a.A[0];
    for (int i = 1; i < a.length; i++)
    {
        if (max < a.A[i])
            max = a.A[i];
    }
    return max;
}
int minimum(struct array a)
{
    int min = a.A[0];
    for (int i = 1; i < a.length; i++)
    {
        if (min > a.A[i])
            min = a.A[i];
    }
    return min;
}
int s;
int sum(struct array a)
{
    s = 0;
    for (int i = 0; i < a.length; i++)
        s = s + a.A[i];
    return s;
}
int average(struct array a)
{
    int av = s / a.length;
    return av;
}
int main()
{
    array a = {{2, 4, 1, 6, 8, 11}, 6};
    int index, key;
    cout << "Enter the index: ";
    cin >> index;
    cout << "The element at the given index is:" << get(a, index) << endl;
    cout << "Enter the index and the key: ";
    cin >> index >> key;
    set(&a, index, key);
    cout << "The elements now are: " << endl;
    display(a);
    cout << endl;
    cout << "MAXIMUM: " << maximum(a) << endl;
    cout << "MINIMUM: " << minimum(a) << endl;
    cout << "SUM: " << sum(a) << endl;
    cout << "AVERAGE: " << average(a);
    return 0;
}