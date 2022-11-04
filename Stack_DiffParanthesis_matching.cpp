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
    char x;
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

int isBalance(char arr[])
{
    char b;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == '[' || arr[i] == '(' || arr[i] == '{')
        {

            push(arr[i]);
        }

        else
        {
            if (top == nullptr)
            {
                return 0;
            }
            else
            {
                char c = pop();
                if (arr[i] == ')')
                {
                    if (c != '(')
                    {
                        return 0;

                        break;
                    }
                }
                else if (arr[i] == ']')
                {
                    if (c != '[')
                    {
                        return 0;
                        break;
                    }
                }
                else if (arr[i] == '}')
                {
                    if (c != '{')
                    {
                        return 0;
                        break;
                    }
                }
            }
        }
    }
 if(top==nullptr){
    return 1;
 }
 else{
    return 0;
 }
    
}

int main()
{
    char exp[] = "({}[]";
    cout << isBalance(exp);
    return 0;
}
