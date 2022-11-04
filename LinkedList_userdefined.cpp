#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int data){
this->data=data;
next=NULL;
    }
};


Node* takeInput(){
 int data;
 cin>>data;
 

 Node *head=NULL;
 Node *last=NULL;

 while(data!=-1){
    Node *newNode=new Node(data);
    //newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        last=newNode;
    }
    else{
        last->next=newNode;
        last=last->next;
    }
    cin>>data;

 }
 return head;
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head=takeInput();
    display(head);
    
    return 0;}