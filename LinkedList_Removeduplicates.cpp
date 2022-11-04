// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int data;
// Node *next;
// }*first=NULL;

// void remove_duplicate(Node *p){
//     Node*q=p->next;
//     while(p!=nullptr){
//         if(p->data!=q->data)     {
//             p=q;
//             q=q->next;
//         }     
//         else{
//             p->next=q->next;
//             delete q;
//             q=p->next;
//         }                                                                                                                                                                                                                                   
//     }
// }
// int main(){
//     int A[]={1,2,3,4,5};
//     int n=5;
//     Node*temp,*last;
//     first=new Node;
//     first->data=A[0];
//     first->next=nullptr;
//     last=first;
// // Create a Linked List
//     for(int i=1;i<n;i++){
//          temp=new Node;
//       temp->data=A[i];
//       temp->next=nullptr;
//  // last's next is pointing to temp
//       last->next=temp;
//       last=temp;
//     }
// remove_duplicate(first);
//     Node* r=first;
//     while(r!=nullptr){
//         cout<<r->data<<endl;
//        r=r->next;
//     }
//     return 0;}

#include <iostream>
using namespace std;
class  Node
{ public:
 int data;
  Node *next;
}*first=nullptr,*second=NULL,*third=NULL;

void Display( Node *p)
{
 while(p!=NULL)
 {
cout<<p->data<<"  ";
 p=p->next;
 }
}
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=new Node;
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void RemoveDuplicate(struct Node *p)
{
 struct Node *q=p->next;

 while(q!=NULL)
 {
 if(p->data!=q->data)
 {
 p=q;
 q=q->next;
 }
 else
 {
 p->next=q->next;
 free(q);
 q=p->next;
 }
 }

}
int main()
{

 int A[]={10,20,20,40,50,50,50,60};
 create(A,8);


 RemoveDuplicate(first);
 Display(first);

 return 0;
}
