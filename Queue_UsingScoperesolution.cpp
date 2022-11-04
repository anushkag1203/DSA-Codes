
#include<iostream>
using namespace std;
class Queue{
    private:
    int size;
    int front;
    int rear;
    int *A;

    public:

    Queue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        A=new int[size];
    }
    
  
  void enqueue(int x);
  void display();
  int dequeue();

};
void Queue::enqueue(int x){
    if(rear==size-1){
        cout<<"Queue overflow";
    }
    else{
        rear++;
        A[rear]=x;
    }

}
void Queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<A[i]<<" ";
    }

}
int Queue::dequeue(){
    int y=-1;
    if(front==rear){
        cout<<"Queue underflow";
    }
    else{
        front++;
        y=A[front];

    }
return y;
}
int main(){
    int n,element;
    cout<<"Enter the  size :";
    cin>>n;
    Queue q(n);
    for(int i=0;i<n;i++){
        cin>>element;
        q.enqueue(element);
    }
    q.display();
    cout<<endl;
    cout<<q.dequeue()<<endl;
    q.display();

    
    return 0;}