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
    Node *l;
    if (front == rear)
    {
        cout << "Queue is full ";
    }
    else
    {
        front = (front + 1) % size;
        l = A[front];
    }
    return l;
}

class Stack
{
private:
    int size;
    int top;
    Node **S;

public:
    void StackCreate(int s);
    void push(Node *value);
    Node *pop();
    int StackisEmpty();
} st;

void Stack::StackCreate(int s)
{
    size = s;
    top = -1;
    S = new Node *[size];
}

int Stack::StackisEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
void Stack::push(Node *value)
{
    if (top == size - 1)
    {
        cout << " Stack is full ";
    }
    else
    {
        top++;
        S[top] = value;
    }
}
Node *Stack::pop()
{
    Node *p = nullptr;
    if (top == -1)
    {
        cout << "Stack is Empty";
    }
    else
    {
        p = S[top];
        top--;
    }
    return p;
}

void precreate()
{
    Node *p, *lnode, *rnode;
    int x = 0;
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

void preorderIterative(Node *t)
{
    st.StackCreate(10);
    while(t!=nullptr || st.StackisEmpty()==0){
        if(t!=nullptr){
        cout<<t->data<<" ";
        st.push(t);
        t=t->lchild;
        }
        else{
            t=st.pop();
            t=t->rchild;
        }

    }
}

void inorderIterative(Node *t){
    st.StackCreate(10);
    while(t!=nullptr || st.StackisEmpty()==0){
        if(t!=nullptr){
            st.push(t);
            t=t->lchild;
        }
        else{
            t=st.pop();
            cout<<t->data<<" ";
            t=t->rchild;

        }
    }
}

int main()
{
    precreate();
    cout<<"Preorder iterative :"; 
    preorderIterative(root);
    cout<<endl;
    cout<<"Inorder iterative :"; 
    inorderIterative(root);

    return 0;
}
