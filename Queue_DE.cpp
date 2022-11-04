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
// void insertAtStart(Queue *q, int value)
// { // Using the front
//     if (q->front == -1)
//     {
//         cout << "Cannot Add" << endl;
//     }
//     else
//     {
//         q->A[q->front] = value;
//         q->front = q->front - 1;
//     }
// }
// void insertAtEnd(Queue *q, int value)
// {
//     if (q->rear == q->size - 1)
//     {
//         cout << "FULL " << endl;
//     }
//     else
//     {
//         q->rear++;
//         q->A[q->rear] = value;
//     }
// }
// int DeleteAtStart(Queue *q)
// {
//     int x = -1;
//     if (q->front == q->rear)
//     {
//         cout << "EMPTY ";
//     }
//     else
//     {
//         q->front++;
//         x = q->A[q->front];
//     }
//     return x;
// }
// int DeleteAtEnd(Queue *q)
// {
//     int x = -1;
//     if (q->front == q->rear)
//     {
//         cout << "EMPTY ";
//     }
//     else
//     {
//         x = q->A[q->rear];
//         q->rear--;
//     }

//     return x;
// }
// void display(Queue q)
// {
//     for (int i = q.front + 1; i <= q.rear; i++)
//     {
//         cout << q.A[i] << " ";
//     }
// }
// int main()
// {
//     int n, value;
//     cout << "Enter the size: ";
//     cin >> n;
//     Queue Q(n);
//     insertAtEnd(&Q, 15);
//     insertAtEnd(&Q, 67);
//     insertAtEnd(&Q, 10);
//     insertAtEnd(&Q, 22);
//     display(Q);
//     cout<<endl;
//     DeleteAtStart(&Q);
//     DeleteAtStart(&Q);
//     display(Q);
//     cout<<endl;
//     insertAtStart(&Q,90);
//     insertAtStart(&Q,2);
//     insertAtStart(&Q,55);
//     display(Q);
//     cout<<endl;
//     DeleteAtEnd(&Q);
//     DeleteAtEnd(&Q);
//     display(Q);
//     cout<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;
void fun(int i){
    if(i!=4){
        cout<<i<<" ";
        i=i++;
        fun(i);
    }
}
int main(){
    fun(0);
    return 0;}