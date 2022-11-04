#include<iostream>
using namespace std;
class stack{
    public:
    int data;
    stack *next;
}*top=NULL;

void push(int x){
stack * temp=new stack;
if(temp==NULL){
    cout<<"Stack is overflow:";
}
else{
    temp->data=x;
    temp->next=top;
    top=temp;
}
}

int pop(){
    int x=-1;
    if(top==NULL){
        cout<<"Stack is empty:";
    }
    else{
        stack *p=top;
        top=top->next;
        x=p->data;
        delete p;

    }
    return x;
}


int peek(int index){
   
    if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        stack *p=top;
        for(int i=1;i<index;i++){
        p=p->next;
        }
        return p->data;
    }
}

int stackTop(){
     if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        return top->data;
    }
    
}
int isEmpty(){
   
    return !top?1:0;
}

int isFull(){
    stack *p=top;
    return   p?0:1;
}
void display(){
    stack *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }

}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
   display();
   cout<<endl;
   cout<< peek(3)<<endl;
    cout<<stackTop()<<endl;
    return 0;}