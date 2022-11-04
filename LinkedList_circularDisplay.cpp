#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
}*head=NULL;

void create(int A[],int  n){
Node *last,*temp;
head=new Node;
head->data=A[0];
head->next=head;
last=head;
for (int i=1;i<n;i++){
    temp=new Node;
    temp->data=A[i];
    temp->next=last->next;
    last->next=temp;
    last=temp;
}
}
void display(Node *p){
    
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
 }

 void recursive(Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data<<" ";
      recursive(p->next);
    }
    flag=0;
 }

int main(){
    int A[]={10,40,50,60,80};
    int n=5;
    create(A,n);
    display(head);
    cout<<endl;
    recursive(head);
    return 0;}