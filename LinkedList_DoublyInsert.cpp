#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
} *first = NULL;

void create(int A[], int n)
{
    Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first->next = first->prev = NULL;
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
int insert(Node *p, int index, int key)
{
    Node *t;
     int i;

    if (index < 0 || index > count(p))
    {
        return 0;
    }
    else
    {
        if (index = 0)
        {
            t = new Node;
            t->data = key;
            t->prev = NULL;
            t->next = first;
            first->prev = t;
            first = t;
        }
        else
        {
            for ( i = 0; i < index - 1; i++)
            {
                p = p->next;
            }
            t = new Node;
            t->data = key;
            t->prev = p;
            t->next = p->next;
            if(p->next!=NULL){
                p->next->prev=t;
            }
           p->next=t;
           
        }
    }
}
int main()
{
    int A[] = {4, 9, 2, 7, 5};
    int n = 5;
    create(A, n);
    display(first);
    insert(first, 4, 6);
    cout << endl;
    display(first);

    return 0;
}