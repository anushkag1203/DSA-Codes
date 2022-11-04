// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int data;
// Node *next;
// }*first=NULL;
// //cannot be done in this way as it does not orm a linked list but just only the prints....
// int reverse(Node *p){
//     if(p==NULL){
//         return 0;
//     }
//     else{
//     reverse(p->next);
//     cout<<p->data<<" ";
//     }
// }
// int main(){
//     int A[]={1,2,3,4,5};
//     int n=5;
//     Node*first,*temp,*last;
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
//     reverse(first);
//  Display Linked List
//     // Node* p=first;
//     // while(p!=nullptr){
//     //     cout<<p->data<<endl;
//     //    p=p->next;
//     // }
//     return 0;}

#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
}*first=NULL;

int reverse(Node*q,Node *p){
    if(p!=NULL){
        reverse(p,p->next);
        p->next=q;
    }
    else{
          first=q;
    }
}
int main(){
    int A[]={1,2,3,4,5};
    int n=5;
    Node *temp,*last;
    first=new Node;
    first->data=A[0];
    first->next=nullptr;
    last=first;
// Create a Linked List
    for(int i=1;i<n;i++){
         temp=new Node;
      temp->data=A[i];
      temp->next=nullptr;
 // last's next is pointing to temp
      last->next=temp;
      last=temp;
    }
    Node *q=NULL;
    reverse(q,first);
// Display Linked List
    Node* p=first;
    while(p!=nullptr){
        cout<<p->data<<" ";
       p=p->next;
    }
    return 0;}


