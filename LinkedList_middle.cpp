#include<iostream>
#include <cmath>
//#include <stack>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
}*first=NULL;

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
 void middle(Node *p){
    int c=0;
    while(p!=NULL){
      c++;
      p=p->next;
    }
    p=first;//this is imp otherwise you wont get answer
    int index = (int)ceil(c/2.0);
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    cout<<p->data;
 }

 void middle2(Node *p){
    Node *q;
    q=first;
    while(q!=NULL){
        q=q->next;
        if(q!=NULL){
            q=q->next;
        }
        if(q!=NULL){
            p=p->next;
        }

    }
    cout<<p->data;
 }

int main(){
    int A[]={3,6,8,9,1,2,4,10,7};
    int n=9;
    create(A,n);
    middle2(first);
    return 0;}