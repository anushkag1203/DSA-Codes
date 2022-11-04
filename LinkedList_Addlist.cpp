#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
};
int add(Node *p){
    if(p==0){
        return 0;
    }
    else{
        return add(p->next)+p->data;
    }
}
int sum(Node*p){
    static int sum=0;
    while(p!=nullptr){
        sum+=p->data;
        p=p->next;
    }
    return sum;                       
}
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

cout<<"Addition:"<<add(first)<<endl;
cout<<"Sum:"<<sum(first);
    return 0;}


