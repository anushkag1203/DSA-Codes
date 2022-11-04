#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;

// void merge(Node *p, Node *q)
// {
//     Node *last;
//     if (first->data < second->data)
//     {
//         third = last = first;
//         first = first->next;
//         third->next = NULL;
//     }

//     else if (first->data > second->data)
//     {
//         third = last = second;
//         second = second->next;
//         third->next = NULL;
//     }
//     while (first != NULL && second != NULL)
//     {
//         if (first->data < second->data)
//         {
//             last->next = first;
//             last = first;
//             first = first->next;
//             last->next = NULL;
//         }
//         else if (first->data > second->data)
//         {
//             last->next = second;
//             last = second;
//             second = second->next;
//             last->next = NULL;
//         }
//     }
//     if (first != NULL)
//     {
//         last->next = first;
//     }
//     else if (second != NULL)
//     {
//         last->next = second;
//     }
// }
void Merge(struct Node *p,struct Node *q)
{
 struct Node *last;
 if(p->data < q->data)
 {
 third=last=p;
 p=p->next;
 third->next=NULL;
 }
 else
 {
 third=last=q;
 q=q->next;
 third->next=NULL;
 }
 while(p && q)
 {
 if(p->data < q->data)
 {
 last->next=p;
 last=p;
 p=p->next;
 last->next=NULL;

 }
 else
 {
 last->next=q;
 last=q;
 q=q->next;
 last->next=NULL;

 }
 }
 if(p)last->next=p;
 if(q)last->next=q;

}
int main()
{
    Node *temp1, *temp2, *last1, *last2;
    int A[] = {1,4, 7, 9};
    int B[] = {2, 3, 5, 6, 8};
    int n = 4, m = 5;
    first = new Node;
    second = new Node;
    first->data = A[0];
    first->next = NULL;
    last1 = first;
    for (int i = 1; i < n; i++)
    {
        temp1 = new Node;
        temp1->data = A[i];
        temp1->next = NULL;
        last1->next = temp1;
        last1 = temp1;
    }
    second->data = B[0];
    second->next = NULL;
    last2 = second;
    for (int i = 1; i < m; i++)
    {
        temp2 = new Node;
        temp2->data = B[i];
        temp2->next = NULL;
        last2->next = temp2;
        last2 = temp2;
    }
    Merge(first, second);
    Node *r = third;
    while (r != nullptr)
    {
        cout << r->data << " ";
        r = r->next;
    }
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//  int data;
//  struct Node *next;
// }*first=NULL,*second=NULL,*third=NULL;
// void Display(struct Node *p)
// {
//  while(p!=NULL)
//  {
//  printf("%d ",p->data);
//  p=p->next;
//  }
// }
// void create(int A[],int n)
// {
//  int i;
//  struct Node *t,*last;
//  first=(struct Node *)malloc(sizeof(struct Node));
//  first->data=A[0];
//  first->next=NULL;
//  last=first;

//  for(i=1;i<n;i++)
//  {
//  t=(struct Node*)malloc(sizeof(struct Node));
//  t->data=A[i];
//  t->next=NULL;
//  last->next=t;
//  last=t;
//  }
// }
// void create2(int A[],int n)
// {
//  int i;
//  struct Node *t,*last;
//  second=(struct Node *)malloc(sizeof(struct Node));
//  second->data=A[0];
//  second->next=NULL;
//  last=second;

//  for(i=1;i<n;i++)
//  {
//  t=(struct Node*)malloc(sizeof(struct Node));
//  t->data=A[i];
//  t->next=NULL;
//  last->next=t;
//  last=t;
//  }
// }
// void Merge(struct Node *p,struct Node *q)
// {
//  struct Node *last;
//  if(p->data < q->data)
//  {
//  third=last=p;
//  p=p->next;
//  third->next=NULL;
//  }
//  else
//  {
//  third=last=q;
//  q=q->next;
//  third->next=NULL;
//  }
//  while(p && q)
//  {
//  if(p->data < q->data)
//  {
//  last->next=p;
//  last=p;
//  p=p->next;
//  last->next=NULL;

//  }
//  else
//  {
//  last->next=q;
//  last=q;
//  q=q->next;
//  last->next=NULL;

//  }
//  }
//  if(p)last->next=p;
//  if(q)last->next=q;

// }
// int main()
// {

//  int A[]={10,20,40,50,60};
//  int B[]={15,18,25,30,55};
//  create(A,5);
//  create2(B,5);


//  Merge(first,second);
//  Display(third);

//  return 0;
// }