#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *A;
};

void create(stack*st){
cout<<"Enter the size of the array:";
    cin>>st->size;
    st->top=-1;
    st->A=new int[st->size];
}
void display(stack st){
    for(int i=st.top;i>-1;i--){
        cout<<st.A[i]<<" ";
    }
}

void push(stack *st,int value){
if(st->top==st->size-1){
    cout<<"stack overflow";
}
else{
    st->top++;
    st->A[st->top]=value;
}
}
int pop(stack*st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack under flow";
    }
    else{
        x=st->A[st->top];
        st->top--;
    }
    return x;
}

int peek(stack st,int pos){
    int index=st.top-pos+1;
    int x=-1;
    if(index<0){
        cout<<"Ivalid syntax";
    }
    else{
        return st.A[index];
    }

}

int stackTop(stack st){
    if(st.top==-1){
        cout<<"Stack is empty";
    }
    else{
        return st.A[st.top];
    }
}
int isEmpty(stack st){
if(st.top==-1){
    return 1;
}
else{
    return 0;
}
}
int isFull(stack st){
    if(st.top==st.size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    push(&st,60);
    display(st);
    cout<<endl;

    cout<<peek(st,3)<<endl;
    cout<<isEmpty(st)<<endl;
    cout<<isFull(st)<<endl;
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    return 0;}