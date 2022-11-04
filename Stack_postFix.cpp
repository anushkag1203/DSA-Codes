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

int  isOperand(char x)
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

int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    else{
        return 0;
    }
}

char *converter(char infix[]){
    int i=0,j=0;

    char *postfix;
    postfix=new char[strlen(infix)+2];//create new array to store the answer .its length increase by 2 for #
    while(i<strlen(infix)){
        if(isOperand(infix[i])){   //if it is a operand the directly add in the array
            postfix[j]=infix[i];
            j++;i++;
        }
        else{
            if(pre(infix[i])>pre(top->data)){//if it's precedance is greater the add in the stack
                push(infix[i]);//i.e push
                i++;
            }
            else{
                char c=pop();//else if precedance is less then pop() out the element in the stack add add it to the array 
                postfix[j]=c;//but here don't increase the i as here we need to check the prcedance of same infix[i] with all the elements
                j++;//present in the array
            }
        }
    }
while(top!=nullptr){//to get the remaining elements of stack in the char array
    char d=pop();
    postfix[j]=d;
    j++;
   
}
postfix[j]='\0';//to end the string
return postfix;
    
}

int main()
{
    char infix[]="a+b*c/d";
    push('#');//if you don't write this error is given
    char *post=converter(infix);
    cout<<post;
    return 0;
}

