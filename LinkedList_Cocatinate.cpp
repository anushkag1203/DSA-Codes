#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
}*first=NULL,*second=NULL;

void concatinate(Node * p,Node * q){
    Node *r;
    while(p->next!=nullptr){//here not just the p but p->next is most imp ...

          p=p->next;
    }
     p->next=second;

    second =NULL;


}
int main(){
    Node *temp1,*temp2,*last1,*last2;
    int A[]={4,7,9,1};
    int B[]={3,8,6,2,5};
    int n=4,m=5;
    first=new Node;
    second=new Node;
    first->data=A[0];
    first->next=NULL;
    last1=first;
    for(int i=1;i<n;i++){
        temp1=new Node;
        temp1->data=A[i];
        temp1->next=NULL;
        last1->next=temp1;
        last1=temp1;

    }
    second->data=B[0];
    second->next=NULL;
    last2=second;
    for(int i=1;i<m;i++){
        temp2=new Node;
        temp2->data=B[i];
        temp2->next=NULL;
        last2->next=temp2;
        last2=temp2;
    }
    concatinate(first,second);
    Node *r=first;
   while(r!=nullptr){
    cout<<r->data<<" ";
    r=r->next;
   }
    return 0;}