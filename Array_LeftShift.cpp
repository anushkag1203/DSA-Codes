// Complicated to think because of the double integers in for loop
#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int d, k = 0, n = 7;
    int tem[20];
    cout << "Enter d from where you want to shift: " << endl;
    cin >> d;
    for (int i = 0, j = d; i < n - d, j < n; i++, j++)
    {
        tem[i] = A[j];
    }
    for (int i = n - d, j = 0; i < n, j < d; i++, j++)
    {
        tem[i] = A[j];
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = tem[i];
        cout << A[i] << " ";
    }

    return 0;
}



// Simple way
#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, tem[25], k = 0, d;
    cout << "Enter d: ";
    cin >> d;
    for (int i = d; i < n; i++)
    {
        tem[k] = A[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        tem[k] = A[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = tem[i];
        cout << A[i] << " ";
    }
    return 0;
}