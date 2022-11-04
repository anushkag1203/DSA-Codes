#include <iostream>
#include <string.h>
using namespace std;
class stack
{
public:
    char data;
    stack *next;
} *top = nullptr;

void push(char value)
{
    stack *temp = new stack;
    if (temp == nullptr)
    {
        cout << "Stack overflow";
    }
    else
    {
        temp->data = value;
        temp->next = top;
        top = temp;
    }
}

char pop()
{
    char x = -1;
    if (top == nullptr)
    {
        cout << "stack underflow";
    }
    else
    {
        stack *p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

int isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

char *converter(char infix[])
{
    int i = 0, j = 0;

    char *postfix;
    postfix = new char[strlen(infix) + 2];
    while (i < strlen(infix))
    {
        if (isOperand(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (pre(infix[i]) > pre(top->data))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                char c = pop();
                postfix[j] = c;
                j++;
            }
        }
    }
    while (top != nullptr)
    {
        char d = pop();
        postfix[j] = d;
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int evaluate(char exp[])
{
    int i = 0;
    int x, y;
    for (i = 0; exp[i] != '#'; i++)
    {
        if (isOperand(exp[i]))
        {
            push(exp[i]-'0');
        }
        else
        {
            x = pop();
            y = pop();
            if (exp[i] == '+')
            {
                push(y + x);
            }
            else if (exp[i] == '-')
            {
                push(y - x);
            }

            else if (exp[i] == '*')
            {
                push(y * x);
            }
            else if (exp[i] == '/')
            {
                push(y / x);
            }
        }
    }
      return pop();
}
int main()
{
    char infix[] = "3*5+6/2-4";
    push('#');

    char *post = converter(infix);
    cout << post;
    cout << endl;
    cout << evaluate(post);
    return 0;
}
