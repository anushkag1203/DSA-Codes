//move to head
#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
}*first=NULL;


Node *search(Node*p,int key){
    Node*q=NULL;
while(p!=0){
    if(p->data==key){
q->next=p->next;
p->next=first;
 first=p;
return p;
    }
    else{
        q=p;
        p=p->next;// this is imp if u ddo this first and the Q=p q will skip middle elements;
    }
}
}

int main(){
    int A[]={78,34,90,23,11};
    int n=5;
    first=new Node;
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
    Node*t;
    int key;
    cin>>key;
    t=search(first,key);
t==NULL?cout<<"Element not found ":cout<<"Element found ";
Node*p=first;
while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next;
}
    return 0;}