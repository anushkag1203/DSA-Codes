#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
}*first=NULL;

int count(Node*p){
    int c=0;
    while(p!=nullptr){
        c++;
        p=p->next;
    }
    return c;
}
int insert(Node *p,int key,int pos){
    Node *q,*r;
   if(pos>=1 && pos<=count(p)+1 ){
    r=new Node;
    r->data=key;
    if(pos==1){
     r->next=first;
     first=r;
    }
    else{
        for(int i=1;i<pos;i++){
            q=p;
            p=p->next;
        }
        q->next=r;
        r->next=p;
    }
   }
}

int main(){
    int A[]={1,2,3,4,5};
    int n=5;
    Node*temp,*last;
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

insert(first,22,1);
    Node* p=first;
    while(p!=nullptr){
        cout<<p->data<<" ";
       p=p->next;
    }
    return 0;}

