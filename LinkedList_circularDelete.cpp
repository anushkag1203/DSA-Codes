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
int count(Node *p){
    int c=0;
    do{
        c++;
        p=p->next;
    }while(p!=head);
    return c;
}

int deleting(Node *p,int index){
      Node *q,*temp;
      int x=count(p);
      if(index<0 || index >=x){
        return 0;
      }
      else{
        if(index==1){
            do{
                q=p;
                p=p->next;
            }while(p!=head);
            if(q==head){
               delete head;
               head=NULL;
            }
            else 
            {
                q->next=head->next;
                delete head;
                head=q->next;
            }
        }
            else if(index>=1 || index<=x){
            for(int i=1;i<index;i++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            delete p;
            }
        
      }
     
      
}
 
int main(){
    int A[]={10,40,50,60,80};
    int n=5;
    create(A,n);
    display(head);
    cout<<endl;
    deleting(head,1);
    display(head);
    return 0;}