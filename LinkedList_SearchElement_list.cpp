#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int search(Node *p,int key){
   
    while(p!=nullptr){
        if(key==p->data){
        return 1;
          break;  
        }  
        else{
            p=p->next;
        }    
    }
    return 0;
   
}
Node * Rsearch(Node*p,int key){
    if(p==nullptr){
        return 0;
    }
    if(p->data==key){
        return p;
    }
    else{
     Rsearch(p->next,key);
    }
}
int main(){
    int A[]={78,34,90,23,11};
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
    int key;
    cin>>key;
    Node*x;
x=Rsearch(first,key);
if(x==0){
    cout<<"Key not found:";
}
else{
    cout<<" found :";
}
    return 0;}