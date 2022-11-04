  #include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *head = NULL;

void create(int A[], int n)
{
    Node *last, *temp;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void display(Node *p)
{

    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
int count(Node *p)
{
    int count = 0;
    do
    {
        count++;
        p = p->next;
    } while (p != head);
    return count;
}

int insert(Node *p, int index, int key)
{
    Node *q, *temp;
    int x= count(p);
    if (index < 0 || index >x){

        return 0;
    }
    else
    {
        if (index == 0)
        {

            temp = new Node;
            temp->data = key;
            if (head == NULL)
            {
                head = temp;
                temp->next = temp;
            }
            else
            {
                temp->next = head;
                do
                {
                    q = p;
                    p = p->next;
                } while (p != head);
                q->next = temp;
                head = temp;
            }
        }
        else if(index>0 && index<=x)
        {
            Node *q, *temp;
            temp = new Node;
            temp->data = key;

            for (int i = 0; i < index ; i++)
            {
                q = p;
                p = p->next;
            }

            temp->next = q->next;
            q->next = temp;
        }
    }
}
// void Atstart(Node *p, int key)
// {
//     Node *q, *temp;
//     temp = new Node;
//     temp->data = key;
//     if (head == NULL)
//     {
//         head = temp;
//         temp->next = temp;
//     }
//     else
//     {
//         temp->next = head;
//         do
//         {
//             q = p;
//             p = p->next;
//         } while (p != head);
//         q->next = temp;
//         head = temp;
//     }
// }
int main()
{
    int A[] = {10,20,40,60,80};
    int n = 5;
    create(A, n);
    display(head);
   cout << endl;
    insert(head, 4, 70);
    display(head);
    cout << endl;
    // Atstart(head, 100);
    // display(head);

    return 0;
}
