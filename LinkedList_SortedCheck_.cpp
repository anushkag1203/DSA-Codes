#include <iostream>
using namespace std;
class Node{
     public:
     int data;
     Node *next;
};
int c(Node*p){
    int x=INT32_MIN;
    while(p!=0){
        if(x>p->data){
            return 1;
            break;
        }
        else if(x<p->data){
            x=p->data;
            p=p->next;
        }
    }
    return 0;
}
int main() {
    int A[]={23,5,67,89,90};
    int n=5;
   Node *first,*temp,*last;
   first=new Node;
   first->data=A[0];
   first->next=nullptr;
   last=first;
   for(int i=1;i<n;i++){
       temp=new Node;
       temp->data=A[i];
       temp->next=nullptr;
       last->next=temp;
       last=temp;
   }
  int x;
  x=c(first);
  if(x==1){
      cout<<"Not sorted";
  }
  else{
      cout<<"Sorted";
  }
    return 0;
}