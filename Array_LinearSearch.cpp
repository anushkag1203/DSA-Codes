#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
int linear_search(struct array a, int key)
{
    for (int i = 0; i < a.length; i++)
    {
        if (a.A[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    array a = {{2, 3, 4, 5, 6, 7, 8}, 10, 7};
    int key;
    cout << "Enter the key to be searched:";
    cin >> key;
    cout << linear_search(a, key) + 1;
    return 0;
}

// TIME COMPLEXITY
// If the elment to be searched is present at the last =O(n)
// If the elment to be searched is present at the first(0) =O(1)
// Average=1+2+3+4+.......+n/n=n(n+1)/2n=n+1
