#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
};
int main(){
    int A[]={1,2,3,4,5};
    int n=5;
    Node*first,*temp,*last;
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
// Display Linked List
    Node* p=first;
    while(p!=nullptr){
        cout<<p->data<<endl;
       p=p->next;
    }
    return 0;}


