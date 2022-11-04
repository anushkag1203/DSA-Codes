#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
} *root = nullptr;
class Queue
{
private:
    int rear;
    int front;
    int size;
    Node **A;

public:
    void create(int s);
    int isEmpty();
    int isFull();
    void enqueue(Node *value);
    Node *dequeue();
} q;
void Queue::create(int s)
{
    size = s;
    front = rear = 0;
    A = new Node *[size];
}

int Queue::isEmpty()
{
    if (front == rear)
    {
        return 1;
    }
    return 0;
}
int Queue::isFull()
{
    if (rear = size - 1)
    {
        return 0;
    }
    return 1;
}

void Queue::enqueue(Node *value)
{
    if ((rear + 1) % size == front)
    {
        cout << "Queue is full ";
    }
    else
    {
        rear = (rear + 1) % size;
        A[rear] = value;
    }
}

Node *Queue::dequeue()
{
    Node *x;
    if (front == rear)
    {
        cout << "Queue is full ";
    }
    else
    {
        front = (front + 1) % size;
        x = A[front];
    }
    return x;
}

void precreate()
{
    Node *p, *lnode, *rnode;
    int x;
    q.create(10);
    cout << "Enter the root node : ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = nullptr;
    q.enqueue(root);
    while (q.isEmpty() == 0)
    {
        p = q.dequeue();
        cout << "Enter the left node : ";
        cin >> x;
        if (x != -1)
        {
            lnode = new Node;
            lnode->data = x;
            lnode->lchild = rnode->rchild = nullptr;
            p->lchild = lnode;
            q.enqueue(lnode);
        }
        cout << "Enter the right node : ";
        cin >> x;
        if (x != -1)
        {
            rnode = new Node;
            rnode->data = x;
            rnode->lchild = rnode->rchild = nullptr;
            p->rchild = rnode;
            q.enqueue(rnode);
        }
    }
}

void inorder(Node *p)
{
    if (p != nullptr)
    {

        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}

int binary_search(Node *p, int x)
{
    if (p == nullptr)
    {
        return 0;
    }
    else
    {
        while (p != nullptr)
        {
            if (x == p->data)
            {
                return 1;
                break;
            }
            else if (x > p->data)
            {
                p = p->rchild;
            }
            else
            {
                p = p->lchild;
            }
        }
    }
    return 0;
}

void insert(Node *p, int key)
{
    Node *t = nullptr, *newNode = nullptr;

    while (p != nullptr)
    {
        t = p;
        if (key == p->data)
        {
        }
        else if (key > p->data)
        {

            p = p->rchild;
        }
        else
        {

            p = p->lchild;
        }
    }
    newNode = new Node;
    newNode->data = key;
    newNode->lchild=newNode->rchild=nullptr;
    if (key > t->data)
    {
        t->rchild = newNode;
    }
    else
    {
        t->lchild = newNode;
    }

    inorder(root);
}

int main()
{
    precreate();
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    insert(root, 25);

    return 0;
}
