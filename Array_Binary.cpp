#include <iostream>
using namespace std;
int main()
{
    int A[] = {23, 25, 27, 29, 30, 31, 36, 39};
    int l = 0, h = sizeof(A) / 4;
    int key, mid;
    cout << "Enter the value of key: ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (A[mid] == key)
        {
            cout << mid;
            break;
        }
        if (A[mid] > key)
        {
            h = mid - 1;
        }
        if (A[mid] < key)
        {
            l = mid + 1;
        }
    }
    return 0;
}

//  best=O(1);
//  best=O(log(n));even for unsuccessful tree