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
void levelorder(Node *p)
{
    cout << root->data << " ";
    q.enqueue(root);
    while (q.isEmpty() == 0)
    {
        Node *p = q.dequeue();
        if (p->lchild != nullptr)
        {
            cout << p->lchild->data << " ";
            q.enqueue(p->lchild);
        }
        if (p->rchild != nullptr)
        {
            cout << p->rchild->data << " ";
            q.enqueue(p->rchild);
        }
    }
}

int noOfNode(Node *p)
{
    int x, y;
    if (p != nullptr)
    {
        x = noOfNode(p->lchild);
        y = noOfNode(p->lchild);

        return x + y + 1;
    }
    else
    {
        return 0;
    }
}

int height(Node *p)
{
    int x, y;
    if (p != nullptr)
    {
        x = height(p->lchild);
        y = height(p->rchild);
        if (x > y)
        {
            return x + 1;
        }
        else
        {
            return y + 1;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    precreate();
    cout << "Level: ";
    levelorder(root);
    cout << endl;
    cout << "No of nodes ";
    cout << noOfNode(root);
    cout << endl;
    cout << "Height of thetree ";
    cout << height(root);

    return 0;
}
