#include <iostream>
using namespace std;
int fun(int *A, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == key)
        {
            return mid;
        }
        else if (A[mid] < key)
        {
            fun(A, mid + 1, h, key);
        }
        else if (A[mid] > key)
        {
            fun(A, l, mid - 1, key);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int A[] = {23, 25, 27, 29, 30, 32, 36, 39, 40};
    int l = 0, h = sizeof(A) / 4;
    int key;
    cout << "Enter the value of key: ";
    cin >> key;
    cout << fun(A, l, h, key);
    return 0;
}