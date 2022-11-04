#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *A;
};
void create(Queue *q){
    cout<<"Enter the size :";
    cin>>q->size;
    q->A=new int[q->size];
    q->front=-1;
    q->rear=-1;
}

void display(Queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.A[i]<<" ";
    }
}
void enqueue(int value,Queue *q){
    if(q->rear==q->size-1){
        cout<<"queue is full";
    }
    else{
     q->rear++;
     q->A[q->rear]=value;
    }
}

int dequeue(Queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"Queue is empty";
    }
    else{
        q->front++;
        x=q->A[q->front];
    }
return x;
}

int main(){
    Queue q;
    int values;
    create(&q);
    for(int i=0;i<q.size;i++){
        cin>>values;
        enqueue(values,&q);
    }
    display(q);
    cout<<endl;
   cout<<"Deleted element is :"<< dequeue(&q)<<endl;
    display(q);


    return 0;}


