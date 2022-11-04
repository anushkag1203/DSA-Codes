// #include <iostream>
// using namespace std;
// class Stack
// {
// public:
//     int size;
//     int top;
//     int *A;
//     Stack(int size)
//     {
//         this->size = size;
//         top = -1;
//         A = new int[size];
//     }
// };

// void push(Stack *st, int value)
// {
//     if (st->top == st->size - 1)
//     {
//         cout << "Stack overflow";
//     }
//     else
//     {
//         st->top++;
//         st->A[st->top] =value;
//     }
// }

// int pop(Stack *st)
// {
//     int x = -1;
//     if (st->top == -1)
//     {
//         cout << "Stack underflow";
//     }
//     else
//     {
//         x = st->A[st->top];
//         st->top--;
//     }
//     return x;
// }

// int peep(Stack st, int pos)
// {
//     int index = st.top - pos + 1;
//     return st.A[index];
// }
// int StackTop(Stack st)
// {
//     return st.A[st.top];
// }

// int isEmpty(Stack st)
// {
//     if (st.top == -1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int isFull(Stack st)
// {
//     if (st.top == st.size - 1)
//     {
//         return 1;
//     }
//     return 0;
// }
// void display(Stack st)
// {
//     for (int i = st.top; i >= 0; i--)
//     {
//         cout << st.A[i] << " ";
//     }
// }
// int main()
// {
//     int size, value;
//     cout << "Enter the size:";
//     cin >> size;
//     Stack s(size);
//     push(&s, 45);
//     push(&s, 5);
//     push(&s, 80);
//     push(&s, 23);
//     push(&s, 4);
//     display(s);
//     cout<<endl;
//     //pop(&s);
//     display(s);
//     cout<<endl;
//    cout<< peep(s,2)<<endl;
//    cout<< isEmpty(s)<<endl;
//    cout<< isFull(s);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Stack{
//     private:
//     int size;
//     int top;
//     int *A;
//     public:
//     Stack(int size){
//         this->size=size;
//         top=-1;
//         A=new int[size];
//     }

//     void push(int value);
//     int pop();
//     void display();
// };
// void Stack::push(int value){
//     if(top==size-1){
//         cout<<"stack overflow";

//     }
//     else{
//         top++;
//         A[top]=value;
//     }
// }

// int Stack::pop(){
//      int x=-1;
//     if(top==-1){

//         cout<<"Stack  Underflow";
//     }
//     else{
//         x=A[top];
//         top--;

//     }
//     return x;

// }

// void Stack::display(){
//     for(int i=top;i>=0;i--){
//         cout<<A[i]<<" ";
//     }
// }
// int main(){
//       int size, value;
//     cout << "Enter the size:";
//     cin >> size;
//     Stack s(size);
//     s.push( 45);
//     s.push( 5);
//     s.push( 80);
//     s.push( 23);
//     s.push( 4);
//     s.display();
//     cout<<endl;
//     //pop(&s);

//     return 0;}

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
// }*top=nullptr;

// void push(int value){
// Node*new_node=new Node;
// new_node->data=value;
// new_node->next=nullptr;
// if(new_node==nullptr){
//     cout<<"Stack Overflow";
// }
// else{
//     new_node->next=top;
//     top=new_node;
// }

// }

// int pop(){
//     int x=-1;
// if(top==nullptr){
//     cout<<"Stack is Empty";
// }
// else{
//     Node *p=top;
//     x=p->data;
//     top=top->next;

// }
// }
// void dispaly(){
//     Node *p=top;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
// }
// int main(){

//     push(56);
//     push(6);
//     push(21);
//     push(50);
//     push(3);
//     dispaly();
//     pop();
//     cout<<endl;
//     dispaly();

//     return 0;}

// #include <iostream>
// using namespace std;
//  class Node{
//     public:
//     int data;
//     Node *next;
// }*top=nullptr;
// void push(int value){
// Node*new_node=new Node;
// new_node->data=value;
// new_node->next=nullptr;
// if(new_node==nullptr){
//     cout<<"Stack Overflow";
// }
// else{
//     new_node->next=top;
//     top=new_node;
// }

// }

// int pop(){
//     int x=-1;
// if(top==nullptr){
//     cout<<"Stack is Empty";
// }
// else{
//     Node *p=top;
//     x=p->data;
//     top=top->next;

// }
// }

// int converter(char *infix){

//     for(int i=0;infix[i]!='\0';i++){
//         if(infix[i]=='('){
//             push('(');
//         }
//         else if(infix[i]==')'){
//             if(top==nullptr){
//                 return 0;
//                 break;
//             }
//             else{
//                 pop();
//             }
//         }
//     }
//     if(top==nullptr){
//         return 1;
//     }
//   return 0;

// }

// int main()
// {
//     char infix[] = "((a+b)*c*d))";
//     cout<<converter(infix);

//     return 0;
// }

// #include <iostream>
// #include <String.h>
// using namespace std;
// class Node
// {
// public:
//     char data;
//     Node *next;
// } *top = nullptr;
// void push(char value)
// {
//     Node *new_node = new Node;
//     new_node->data = value;
//     new_node->next = nullptr;
//     if (new_node == nullptr)
//     {
//         cout << "Stack Overflow";
//     }
//     else
//     {
//         new_node->next = top;
//         top = new_node;
//     }
// }

// int pop()
// {
//     char x;
//     if (top == nullptr)
//     {
//         cout << "Stack is Empty";
//     }
//     else
//     {
//         Node *p = top;
//         x = p->data;
//         top = top->next;
//     }
//     return x;
// }
// int isoperator(char x)
// {
//     if (x == '+' || x == '-' || x == '*' || x == '/')
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }

// int pre(char x)
// {
//     if (x == '+' || x == '-')
//     {
//         return 1;
//     }
//     else if (x == '*' || x == '/')
//     {
//         return 2;
//     }
//     else
//     {
//         return 0;
//     }
// }

// char *converter(char *infix)
// {
//     int j = 0, i = 0;
//     int l = strlen(infix);
//     char *postfix = new char[l + 2];
//     while (infix[i] != '\0')
//     {
//         if (isoperator(infix[i]))
//         {
//             postfix[j++] = infix[i++];
//         }
//         else
//         {
//             if(pre(infix[i])>pre(top->data)){
//                 push(infix[i++]);
//             }
//             else{
//                 postfix[j++]=pop();

//             }
//         }
//     }

//     while(top!=nullptr && top->data!='#'){
//         postfix[j++]=pop();
//     }
//     postfix[j]='\0';
//     return postfix;
// }
// int main()
// {
//     char infix[] = "a+b*c/d";
//     push('#');
//     char *postfix;
//     postfix = converter(infix);
//     cout << postfix;
//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;
class Node
{
public:
    char data;
    Node *next;
} *top = nullptr;
void push(char value)
{
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = nullptr;
    if (new_node == nullptr)
    {
        cout << "Stack Overflow";
    }
    else
    {
        new_node->next = top;
        top = new_node;
    }
}

int pop()
{

    if (top == nullptr)
    {
        cout << "Stack is Empty";
    }
    else
    {
        Node *p = top;
        top = top->next;
    }
}

int isoperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' ||
        x == '^' || x == '(' || x == ')')
    {
        return 0;
    }
    return 1;
}

int outside(char x)
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
    else if (x == ')')
    {
        return 0;
    }
    return -1;
}

int inside(char x)
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
    return -1;
}
// int isoperand(char x)
// {
//     if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^' || x == '(' || x == ')')
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int outside(char x)
// {
//     if (x == '+' || x == '-')
//     {
//         return 1;
//     }
//     else if (x == '*' || x == '/')
//     {
//         return 3;
//     }
//     else if (x == '^')
//     {
//         return 6;
//     }
//     else if (x == '(')
//     {
//         return 7;
//     }
//     else if (x == ')')
//     {
//         return 0;
//     }

//     return -1;
// }
// int inside(char x)
// {
//     if (x == '+' || x == '-')
//     {
//         return 2;
//     }
//     else if (x == '*' || x == '/')
//     {
//         return 4;
//     }
//     else if (x == '^')
//     {
//         return 5;
//     }
//     else if (x == '(')
//     {
//         return 0;
//     }
//     return -1;
// }

// char *converter(char *infix)
// {
//     int i = 0, j = 0;
//     int l = strlen(infix);
//     char *postfix = new char[l + 2];
//     while (infix[i] != '\0')
//     {

//         if (isoperand(infix[i]))
//         {
//             postfix[j] = infix[i];
//             j++;
//             i++;
//         }
//         else
//         {
//             if (top != nullptr || outside(infix[i]) > inside(top->data))
//             {
//                 push(infix[i]);
//                 i++;
//             }
//             else if (outside(infix[i]) == inside(top->data))
//             {
//                 pop();
//             }
//             else
//             {
//                 postfix[j] = top->data;
//                 pop();
//                 j++;
//             }
//         }
//     }
//     while (top != nullptr && top->data != ')')
//     {
//         postfix[j] = top->data;
//         pop();
//         j++;
//     }
//     postfix[j] = '\0';

//     return postfix;
// }

char *convert(char *infix)
{
    char *postfix = new char[strlen(infix) + 1];
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (isoperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (top != nullptr || outside(infix[i]) > inside(top->data))
            {
                push(infix[i++]);
            }
            else if (outside(infix[i]) == inside(top->data))
            {
                pop();
            }
            else
            {
                postfix[j++] = top->data;
                pop();
            }
        }
    }

    while (top != nullptr && top->data != ')')
    {
        postfix[j++] = top->data;
        pop();
    }

    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char infix[] = "((a+b)*c)-d^e^f";
    push('#');
    char *postfix;
    cout << convert(infix);

    return 0;
}