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

int deleting(Node *p,int pos){
Node*q=NULL;
int c=count(p);
int x=-1,i;
if(pos<0 || pos>c){
    return 0;
}
else{
if(pos==0){
    q=first;
   x=first->data;
   first=first->next;
   delete q;
}
else if(pos>0 || pos<=c){
   
    for(int i=1;i<pos;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
}
}

 }

int main(){
    int A[]={56,62,90,23,81};
    int n=5;
    Node*first,*temp,*last;
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
deleting(first,4);
    Node* r=first;
    while(r!=0){
        cout<<r->data<<endl;
       r=r->next;
    }
    return 0;}


