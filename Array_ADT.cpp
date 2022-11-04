#include <iostream>
using namespace std;
struct array
{
    int *A; // or directly write int A[--];
    int size;
    int length;
};
void display(struct array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << " ";
    }
}
int main()
{
    array a;
    cout << "Enter the size :" << endl;
    cin >> a.size;
    cout << "Enter the length:" << endl;
    cin >> a.length;
    a.A = new int[a.length];
    cout << "Enter the Elements:" << endl;
    for (int i = 0; i < a.length; i++)
    {
        cin >> a.A[i];
    }
    display(a);
    return 0;
}