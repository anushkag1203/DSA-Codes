// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int data;
// Node *next;
// }*first=NULL;

// int count(Node*p){
//     int c=0;
//     while(p!=nullptr){
//         c++;
//         p=p->next;
//     }
//     return c;
// }
// int insert(Node *p,int key,int pos){
//     Node*t;
//     t=new Node;
//  t->data=key;
//    int x=count(p);
  
//     if(pos==0){
//         t->next=first;
//         first=t;
//     }
//     else if(pos>0 && pos<=x){
//         Node*c;
//         c=first;
//         for(int i=0;i<pos-1;i++){
//         c=c->next;
//         }
       
//         t->next=c->next;
//         c->next=t;
//     }


// }

// int main(){

// insert(first,22,0);
// insert(first,46,1);
// insert(first,89,2);
// insert(first,21,3);
// insert(first,12,4);
// insert(first,2,5);
// insert(first,56,6);
// insert(first,66,0);
//     Node* p=first;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//        p=p->next;
//     }
//     return 0;}



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
}*first=NULL;

void insertLast(int key){
    Node*last,*temp;
    temp=new Node;
  temp->data=key;
temp->next=nullptr;
if(first==nullptr){//thid is done to know that when your first has not started then temp will go to the first...
    first=last=temp;
    
}
else{
    last->next=temp;
    last=temp;
}
}
int main(){
    Node*r;
    
    insertLast(23);
    insertLast(54);
    insertLast(20);
    insertLast(13);
    insertLast(2);
    r=first;//writing it here is imp as if you write it before function the r=NULL and remember it is imp to initlize it....
    while(r!=nullptr){
        cout<<r->data<<"  ";
        r=r->next;
    }


    return 0;}


// #include<iostream>
// using namespace std;
// int mul(int l,int h,int A[]){
//     int m=1;
//     int i,j;
//     for( int a=l;a<=h;a++){
//     m=m*A[a];
//     }
    
//     return m;
// }
// int main(){
//     int A[]={1,2,3,4};
//     int n=4,x,y;
//    int l=0,h=n-1;
//     for(int i=0;i<n;i++){

//         x=mul(l,i-1,A);
//         y=mul(i+1,h,A);
//         cout<<x*y<<" ";
//     }
//    return 0;}