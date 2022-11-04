#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *prev;
    Node *next;
}*first=NULL;

void create(int A[],int n){
    Node *temp,*last;
    first=new Node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}
void display(Node *p){
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int count(Node *p){
    int c=0;
    while(p!=nullptr){
    c++;
     p=p->next;
    }
    return c;
}


int deleting(Node *p,int index){
    Node* q;
    int x=0;
    if(index<=0 || index>count(p)){
        return 0;
    }
    else{
        if(index==1){
            p=first;
            first=first->next;
             x=p->data;
             delete p;
             if(first!=NULL){
             first->prev=NULL;
             }
        }
        else{
            for(int i=1;i<index;i++){
                p=p->next;
            }
            p->prev->next=p->next;
            if(p->next){
                p->next->prev=p->prev;
            }
        }

    }
}
int main(){
  int A[]={34,6,7,2,1};
    int n=5;
    create(A,n);
    display(first);
    cout<<endl;
   deleting(first,1);
   display(first);
    return 0;} 
