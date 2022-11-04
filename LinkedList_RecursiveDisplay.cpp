#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node *next;
};
void display(struct Node *p){
  if(p!=nullptr){
    cout<<p->data<<" ";
    display(p->next);
  }
}
int main(){
    int A[]={1,2,3,4,5};
    int n=5;
    Node *first,*last,*temp;
    first=new Node();
   first->data=A[0];
   first->next=nullptr;
   last=first;
   for(int i=1;i<n;i++){
    temp=new Node();
    temp->data=A[i];
    temp->next=nullptr;
    last->next=temp;
    last=temp;
   }
   display(first);
    return 0;}