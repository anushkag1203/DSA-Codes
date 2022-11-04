#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
}*first=NULL;

void insert(Node*p,int key){
    Node *n,*t=NULL;
    n=new Node;
    n->data=key;
    n->next=NULL;
    if(first==NULL)
        first=n;
    else{
     while(p!=nullptr && key>p->data){
        t=p;
        p=p->next;
     }
     if(p==first){
        n->next=first;
        first=n;
     }
     else{
        n->next=t->next;
        t->next=n;
        
     }
    }
}
int main(){
    int A[]={3,7,9,15,20};
    int n=5;
    Node*temp,*last;
    first=new Node;
    first->data=A[0];
    first->next=nullptr;
    last=first;
    for(int i=1;i<n;i++)
{
temp=new Node;
temp->data=A[i];
temp->next=nullptr;
last->next=temp;
last=temp;
}    

insert(first,17);
Node*r;
r=first;
while(r!=nullptr){
    cout<<r->data<<" ";
    r=r->next;
}
    return 0;}