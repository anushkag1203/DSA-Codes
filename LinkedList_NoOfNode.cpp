#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
};
int count(Node *p){
  
    if(p==0){
        return 0;
    }
    else{
        
      return  count(p->next)+1;
     
    }
    
}
int main(){
    int A[]={1,2,3,4,5};
    int n=5,c=0;
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
// Count the node
    Node* p=first;
    while(p!=nullptr){
     c++;
       p=p->next;
    }
    cout<<"No of nodes:"<<c<<endl;
    //by recursion
    cout<<"No of nodes by recursion:"<<count(first);
    return 0;}

