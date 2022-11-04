#include <iostream>
using namespace std;
int main()
{
    int A[] = {5, 8, 3, 9, 6, 7, 10, 7, -1, 4};
    int n = 10, min = A[0], max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        else
        {
            if (A[i] > max)
            {
            max = A[i];
            }
        }
    }

cout << "MAX: " << max << " "
     << "MIN: " << min;
return 0;
}

//O(n)