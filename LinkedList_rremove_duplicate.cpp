#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node*next;
}*first=nullptr;

void create(int A[],int n){
  Node *last,*temp;
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
}
void display(Node *p){
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
}

void Remove(Node *p){
    Node *q;
    q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

int main(){
    int A[]={10,20,20,40,50,50,50};
    int n=7;
    create(A,7);

    Remove(first);
    display(first);
    
    return 0;}