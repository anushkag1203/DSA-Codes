#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int length;
};
int isSorted(struct array a)
{
    for (int i = 0; i < a.length - 1; i++)
    {                            // if we write i<a.length then A[7]>A[8] will be checked i.e 20>0 and always will give non sorted array
        if (a.A[i] > a.A[i + 1]) // so i<a.length-1  i.e A[6]<A[7]  will be checked and end.....Mainly in such type of questin focus on false
            return 0;            // conditon inside if....
    }
    return 1;
}
int main()
{
    array a = {{1, 4, 7, 10, 12, 24, 17, 20}, 8};
    isSorted(a);
    if (isSorted(a) == 1)
    {
        cout << "Array is sorted.";
    }
    else
    {
        cout << "Array is not sorted.";
    }
    return 0;
}