#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *A;

    Queue(int size){
        this->size=size;
        rear=0;
        front=0;
        A=new int[size];
    }
};

void enqueue(Queue*q,int value){
    if((q->rear+1)%q->size==q->front){
        cout<<"The queue is full for element :"<<value <<endl;
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->A[q->rear]=value;
    }
}
int dequeue(Queue *q){
    int x=-1;
    if( q->front==q->rear){
        cout<<"Queue is full"<<endl;
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->A[q->front];
    }
    return x;
}

void display(Queue q){
    int i=q.front;
   do{
      i=(i+1)%q.size;
      cout<<q.A[i]<<" ";
    } while(i!=q.rear);
}
int main(){

    int n,value;
    cout<<"Enter the size of the queue: ";
    cin>>n;
    Queue Q(n);
    cout<<"NOTE:Enter only n-1 elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        enqueue(&Q,value);
    }
    display(Q);
    cout<<endl;
    cout<<dequeue(&Q)<<endl;
    display(Q);

    
    return 0;}