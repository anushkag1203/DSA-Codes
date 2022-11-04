#include <iostream>
using namespace std;
class Matrix
{
public:
    int n;
    int size;
    int *A;
    Matrix(int n)
    {
        this->n = n;
        size = n * (n + 1) / 2;
        A = new int[size];
    }
    void rowMajor_set(int i, int j, int x);
    void rowMajor_get(int i, int j);
    void rowMajor_display();
    void columnMajor_set(int i, int j, int x);
    void columnMajor_get(int i, int j);
    void columnMajor_display();
};

void Matrix::rowMajor_set(int i, int j, int x)
{
    if (i <= j)
    {
        int index = (j * (j - 1) / 2) + (i - 1);
        A[index] = x;
    }
}
void Matrix::rowMajor_get(int i, int j)
{
    if (i <= j)
    {
        int index = (j * (j - 1) / 2) + (i - 1);
        cout << A[index] << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

void Matrix::rowMajor_display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                int index = (j * (j - 1) / 2) + (i - 1);
                cout << A[index] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

void Matrix::columnMajor_set(int i, int j, int x)
{
    if (i <= j)
    {
        int index = (n * (i - 1) - ((i - 1) * (i - 2) / 2)) + (j - i);
        A[index] = x;
    }
}

void Matrix::columnMajor_get(int i, int j)
{
    if (i <= j)
    {
        int index = (n * (i - 1) - ((i - 1) * (i - 2) / 2)) + (j - i);
        cout << A[index] << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

void Matrix::columnMajor_display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                int index = (n * (i - 1) - ((j - 1) * (j - 2) / 2)) + (j - i);
                cout << A[index] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
int main()
{

    Matrix m(4);
    m.rowMajor_set(1, 1, 3);
    m.rowMajor_set(1, 2, 8);
    m.rowMajor_set(1, 3, 9);
    m.rowMajor_set(1, 4, 2);
    m.rowMajor_set(2, 2, 5);
    m.rowMajor_set(2, 3, 6);
    m.rowMajor_set(2, 4, 7);
    m.rowMajor_set(3, 3, 1);
    m.rowMajor_set(3, 4, 12);
    m.rowMajor_set(4, 4, 34);

    m.rowMajor_get(3, 4);
    m.rowMajor_get(1, 4);

    m.rowMajor_display();

    return 0;
}

