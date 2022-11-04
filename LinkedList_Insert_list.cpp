#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
}*first=NULL;

void insert(Node*P,int  key){
    Node*temp=new Node;
    temp->data=key;
    temp->next=first;
    first=temp;
    
}

int main(){
    int A[]={78,34,90,23,11};
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

insert(first,45);
Node*t=first;
while(t!=nullptr){
    cout<<t->data<<" ";
    t=t->next;
}
    return 0;}