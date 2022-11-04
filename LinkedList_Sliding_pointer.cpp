#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
}*first=NULL;

void reverse(Node *p){
    Node *r=NULL;
    Node *q=NULL;
    while (p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
first=q;
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
// Display Linked List
reverse(first);
    Node* r=first;
    while(r!=nullptr){
        cout<<r->data<<" ";
       r=r->next;
    }
    return 0;}

