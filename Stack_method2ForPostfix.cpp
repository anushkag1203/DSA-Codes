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
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '(' || x == ')' || x == '^')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int OutSidePre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 3;
    }
    else if (x == '^')
    {
        return 6;
    }
    else if (x == '(')
    {
        return 7;
    }
    else
    {
        return 0;
    }
}

int InSidePre(char x)
{
    if (x == '+' || x == '-')
    {
        return 2;
    }
    else if (x == '*' || x == '/')
    {
        return 4;
    }
    else if (x == '^')
    {
        return 5;
    }
    else if (x == '(')
    {
        return 0;
    }
    else
    {
        return 0;
    }
}

char *converter(char infix[])
{
    int i = 0, j = 0;
    int len = strlen(infix);
    char *postfix = new char[len + 2];
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i])==1)
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (OutSidePre(infix[i]) > InSidePre(top->data))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                if (infix[i] == ')' && top->data == '#')
                {
                    i++;
                }
                else if (infix[i] == ')' && top->data == '(')
                {
                    pop();
                }
                else
                {
                    postfix[j] == pop();
                    j++;
                }
            }
        }
    }

    while(top!=nullptr){
        postfix[j]=pop();
        j++;

    }
    postfix[j]='\0';
}

int main()
{

    char infix[] = "((a+b)*c)-d^e^f";
    push('#');
    char *post = converter(infix);
    cout << post;
    return 0;
}




//#  include <iostream>
// #include <string.h>
// using namespace std;
// class stack
// {
// public:
//     char data;
//     stack *next;
// } *top = nullptr;

// void push(char value)
// {
//     stack *temp = new stack;
//     if (temp == nullptr)
//     {
//         cout << "Stack overflow";
//     }
//     else
//     {
//         temp->data = value;
//         temp->next = top;
//         top = temp;
//     }
// }

// char pop()
// {
//     char x = -1;
//     if (top == nullptr)
//     {
//         cout << "stack underflow";
//     }
//     else
//     {
//         stack *p = top;
//         top = top->next;
//         x = p->data;
//         delete p;
//     }
//     return x;
// }

// int isEmpty()
// {
//     if (top == nullptr)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int isOperand(char x){
//     if (x == '+' || x == '-' || x == '*' || x == '/' ||
//         x == '^' || x == '(' || x == ')'){
//         return 0;
//     }
//     return 1;
// }
 
// int outPrecedence(char x){
//     if (x == '+' || x == '-'){
//         return 1;
//     } else if (x == '*' || x == '/'){
//         return 3;
//     } else if (x == '^'){
//         return 6;
//     } else if (x == '('){
//         return 7;
//     } else if (x == ')'){
//         return 0;
//     }
//     return -1;
// }
 
// int inPrecedence(char x){
//     if (x == '+' || x == '-'){
//         return 2;
//     } else if (x == '*' || x == '/'){
//         return 4;
//     } else if (x == '^'){
//         return 5;
//     } else if (x == '('){
//         return 0;
//     }
//     return -1;
// }
 
// char* convert(char* infix){
//     char* postfix = new char [strlen(infix) + 1];

//     int i = 0;
//     int j = 0;
 
//     while (infix[i] != '\0'){
//         if (isOperand(infix[i])){
//             postfix[j++] = infix[i++];
//         } else {
//             if (isEmpty() || outPrecedence(infix[i]) > inPrecedence(top->data)){
//                push(infix[i++]);
//             } else if (outPrecedence(infix[i]) == inPrecedence(top->data)){
//                 pop();
//             }
//             else {
//                 postfix[j++] = top->data;
//                 pop();
//             }
//         }
//     }
 
//     while (!isEmpty() && top->data != ')'){
//         postfix[j++] = top->data;
//         pop();
//     }
 
//     postfix[j] = '\0';
 
//     return postfix;
 
// }
 

// int main()
// {

//     char infix[] = "((a+b)*c)-d^e^f";
//     push('#');
//     char *post = convert(infix);
//     cout << post;
//     return 0;
// }