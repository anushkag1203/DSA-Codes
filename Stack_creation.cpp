#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *S;
};

void create(stack *st)
{
    cout << "Enter the size of the array:";
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void display(stack st)
{
    int i;
    for (i = st.top; i > -1; i--)
    {
        cout << st.S[i] << " ";
    }
}

void push(stack *st, int value)
{
    if (st->top == st->size - 1)
    {
        cout << "Sack overflow";
    }
    else
    {
        st->top++;
        st->S[st->top] = value;
    }
}

int pop(stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "Stack underflow:";
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(stack st, int pos)
{
    int index = st.top - pos + 1;
    int x = -1;
    if (index < 0)
    {
        cout << "Invalid Index";
    }
    else
    {
        x = st.S[index];
    }
    return x;
}

int stackTop(stack st)
{
    if (st.top == -1)
    {
        return 0;
    }
    else
    {
        return st.S[st.top];
    }
}

int isEmpty(stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(stack st)
{
    if (st.top = st.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    // push(&st,60);

    display(st);
    // pop(&st);
    cout << endl;
    // display(st);
    cout << peek(st, 2) << endl;
    cout << stackTop(st) << endl;
    cout << isEmpty(st) << endl;
    cout << isfull(st);
    return 0;
}