// #include <iostream>
// using namespace std;
// class Queue
// {
// public:
//     int size;
//     int rear;
//     int front;
//     int *A;
//     Queue(int size)
//     {
//         this->size = size;
//         rear = -1;
//         front = -1;
//         A = new int[size];
//     }
// };

// void enqueue(Queue *q, int value)
// {
//     if (q->rear == q->size - 1)
//     {
//         cout << "Queue is full";
//     }
//     else
//     {
//         q->rear++;
//         q->A[q->rear] = value;
//     }
// }

// int dequeue(Queue *q)
// {
//     int x = -1;
//     if (q->front == q->rear)
//     {
//         cout << "Queue is empty";
//     }
//     else
//     {
//         q->front++;
//         x = q->A[q->front];
//     }
//     return x;
// }

// void display(Queue q)
// {
//     for (int i = q.front+1; i <= q.rear; i++)
//     {
//         cout << q.A[i] << " ";
//     }
// }
// int main()
// {
//     int size, value;
//     cout << "Enter the size: ";
//     cin >> size;
//     Queue q(size);
//     enqueue(&q, 56);
//     enqueue(&q, 6);
//     enqueue(&q, 112);
//     enqueue(&q, 90);
//     enqueue(&q, 31);
//     display(q);
//     cout << endl;
//     cout << dequeue(&q) << endl;
//     display(q);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[] = {1, 6, 4, 8, 2};
//     int n = 5, i, k = 0, j = 0;
//     int max;
//     while (k < 3)
//     {
//         max = A[0];
//         for (i = 0; i < n; i++)
//         {
//             if (max < A[i])
//             {
//                 max = A[i];
//                 j = i;
//             }
//         }
//         A[j] = -1;

//         k++;
//     }
//     cout << max;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// } *rear = nullptr, *front = nullptr;

// void enqueue(int value)
// {
//     Node *temp = new Node;
//     temp->data=value;
//     temp->next = nullptr;
//     if (temp == nullptr)
//     {
//         cout << "Queue is empty";
//     }
//     else
//     {
//         if (front == nullptr)
//         {
//             front = temp;
//             rear = temp;
//         }
//         else
//         {
//             rear->next = temp;
//             rear = temp;
//         }
//     }
// }

// int dequeue()
// {
//      int x=-1;
//     if(front==nullptr){       
//         cout<<"Queue is empty";
//     }
//     else{
//         Node *p=front;
//         x=p->data;
//         front=front->next;
//     }
//     return x;
// }

// void display()
// {
//     Node *p=front;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
//     }

// }
// int main()
// {
//     enqueue(56);
//     enqueue(6);
//     enqueue(1);
//     enqueue(91);
//     enqueue(45);
//     display();
//     cout<<endl;
//     dequeue();
//     dequeue();
//     display();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Queue{
//     private:
//     int size;
//     int rear;
//     int front;
//     int *A;
//     public:
//     Queue(int size){
//         this->size=size;
//         rear=0;
//         front=0;
//         A=new int[size];
//     }

//     void enqueue(int value);
//     int dequeue();
//     void display();
// };
// void Queue::enqueue(int value){
//     if((rear+1)%size==front){
//         cout<<"Queue is full ";
//     }
//     else{
//         rear=(rear+1)%size;
//         A[rear]=value;

//     }
// }
// int Queue::dequeue(){
//     int x=-1;
//     if(front==rear){
//         cout<<"Queue is empty";
//     }
//     else{
//         front=(front+1)%size;
//         x=A[front];
//     }

// }
// void Queue::display(){
//     int i=front;
//   do{
//     i=(i+1)%size;
//     cout<<A[i]<<" ";

//   }while(i!=rear);
// }
// int main(){
//     int size;
//     cout<<"Enter teh size :";
//     cout<<"NOTE.... Enter size -1 elements";
//     cin>>size;
//     Queue q(size);
//     q.enqueue(45);
//     q.enqueue(5);
//     q.enqueue(11);
//     q.enqueue(78);
//       q.dequeue();
//     q.enqueue(99);
//     q.dequeue();
//        q.enqueue(9);
//     q.display();
//     // cout<<endl;
//     // q.dequeue();
//     // q.dequeue();
//     // q.display();
    
//     return 0;}


#include<iostream>
using namespace std;
class Queue{
    private:
    int size;
    int rear;
    int front;
    int *A;
    public:
    Queue(int size){
        this->size=size;
        rear=-1;
        front=-1;
        A=new int[size];
    }

    void insertAtStart(int value);
    void insertAtEnd(int value);
    int DeleteAtStart();
    int DeleteAtEnd();
    void display();
};
void Queue::insertAtEnd(int value){
    if(rear==size-1){
        cout<<"Queue is full";
    }
    else{
        rear++;
        A[rear]=value;
    }
}
void Queue::insertAtStart(int value){
    if(front==-1){
        cout<<"Cannot insert at start";
    }
    else{
        A[front]=value;
        front--;
    }
}
int Queue::DeleteAtStart(){
    int x=-1;
    if(front==rear){
        cout<<"QWueue is empty";
    }
    else{
        front++;
        x=A[front];
    }
    return x;
}
int Queue::DeleteAtEnd(){
    int x=-1;
    if(rear==front){
        cout<<"Queue is empty";
    }
    else{
        x=A[rear];
        rear--;
    }
    return x;
}

void Queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    Queue q(size);
    q.insertAtEnd(1);
    q.insertAtEnd(2);
    q.insertAtEnd(3);
    q.insertAtEnd(4);
    q.insertAtEnd(5);
    q.display();
    cout<<endl;
    q.DeleteAtEnd();
    q.display();
    cout<<endl;
    q.DeleteAtStart();
    q.DeleteAtStart();
    q.display();
    cout<<endl;
    q.insertAtStart(6);
    q.insertAtStart(7);
    q.display();
    cout<<endl;

    
    return 0;}