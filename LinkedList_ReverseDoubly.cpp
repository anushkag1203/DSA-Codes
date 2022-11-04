#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
} *first = NULL;

void create(int A[], int n)
{
    Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}
void display(Node *p)
{
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int count(Node *p)
{
    int c = 0;
    while (p != nullptr)
    {
        c++;
        p = p->next;
    }
    return c;
}

void reverse(Node *p)
{
    Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p=p->prev;
        if (p->next == NULL && p != NULL)
        {
            first = p;
        }
    }
}
int main()
{
    int A[] = {34, 6, 7, 2, 1};
    int n = 5;
    create(A, n);
   // display(first);
    cout << endl;
    reverse(first);
    display(first);
    return 0;
}
