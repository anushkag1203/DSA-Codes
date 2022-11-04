#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
}*first=NULL;

int circular(Node *r){
    Node *p,*q;
    p=q=r;
    do{
        p->next;
        q->next;
        q=q?q->next:q;
    }while(p  && q && p!=q);
    if(p==q){
       return 1;
    }
    else{
       return 0;
    }

}
int main(){
    Node *t1,*t2 ,*temp,*last;
    int A[]={10,20,30,40,50};
    int n=5;
  
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
         temp=new Node;
      temp->data=A[i];
      temp->next=NULL;
      last->next=temp;
      last=temp;
    }


   
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;

cout<<circular(first);


     return 0;}

// #include <iostream>

// class Node
// {public:
//  int data;
//   Node *next;
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
//   Node *t,*last;
//  first=new Node;
//  first->data=A[0];
//  first->next=NULL;
//  last=first;

//  for(i=1;i<n;i++)
//  {
//  t=new Node;
//  t->data=A[i];
//  t->next=NULL;
//  last->next=t;
//  last=t;
//  }
// }
// int isLoop( Node *f)
// {
//   Node *p,*q;
//  p=q=f;

//  do
//  {
//  p=p->next;
//  q=q->next;
//  q=q?q->next:q;
//  }while(p && q && p!=q);

//  if(p==q)
//  return 1;
//  else
//  return 0;
// }
// int main()
// {
//   Node *t1,*t2;

//  int A[]={10,20,30,40,50};
//  create(A,5);

//  t1=first->next->next;
//  t2=first->next->next->next->next;
//  t2->next=t1;

//  printf("%d\n",isLoop(first));


//  return 0;
// }
