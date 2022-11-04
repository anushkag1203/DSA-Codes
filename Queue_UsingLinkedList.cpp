// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
// }*front=nullptr,*rear=nullptr;

// void enqueue(int value){
//     Node * new_node=new Node;
//     new_node->data=value;
//     new_node->next=nullptr;
//     if(new_node==nullptr){
//         cout<<"The queue is full";
//     }
//     else{
//         if(front==nullptr){
//             front=new_node;
//             rear=new_node;
//         }
//         else{
//             rear->next=new_node;
//             rear=new_node;
//         }
//     }
// }

// int dequeue(){
//     Node *p;
//     int x=-1;
//     if(front==nullptr){
//         cout<<"Empty"<<endl;
//     }
//     else{
//         p=front;
//         front=front->next;
//         x=p->data;
//         delete p;
//     }
//     return x;
// }

// void display(){
//     Node *p=front;
//   while(p!=nullptr){
//   cout<<p->data<<" ";
//   p=p->next;
//   }

// }
// int main(){
//     int n,value;
//     Node *main;
//     cout<<"Enter the size: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>value;
//       enqueue(value);
//     }
//     display();
//    cout<<"The deleted element is: "<< dequeue()<<endl;
//    display();
    
//     return 0;}



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *front=nullptr,*rear=nullptr;

void enqueue(int value){
    Node * new_node=new Node;
    new_node->data=value;
    new_node->next=nullptr;
    if(new_node==nullptr){
        cout<<"The queue is full";
    }
    else{
        if(front==nullptr){
            front=new_node;
            rear=new_node;
        }
        else{
            rear->next=new_node;
            rear=new_node;
        }
    }
}

int dequeue(){
    Node *p;
    int x=-1;
    if(front==nullptr){
        cout<<"Empty"<<endl;
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;
    }
    return x;
}

void display(){
    Node *p=front;
  while(p!=nullptr){
  cout<<p->data<<" ";
  p=p->next;
  }

}
int main(){
    int n,value;
    Node *main;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
      enqueue(value);
    }
    display();
    cout<<endl;
   cout<<"The deleted element is: "<< dequeue()<<endl;
   display();
    
    return 0;}