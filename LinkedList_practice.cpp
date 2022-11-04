// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// }*first=NULL;
// int inserLast(Node *q,Node *p)
// {
//     if(p!=nullptr){
//       inserLast(p,p->next);
//         p->next=q;
//     }
//     else{
//         first=q;

//     }

// }

// int main()
// {
//     int A[] = {1, 2, 4,5,6};
//     int n = 5;
//     Node  *temp, *last;
//     first = new Node;
//     first->data = A[0];
//     first->next = nullptr;
//     last = first;
//     // Create a Linked List
//     for (int i = 1; i < n; i++)
//     {
//         temp = new Node;
//         temp->data = A[i];
//         temp->next = nullptr;
//         last->next=temp;
//         last=temp;}
//         // last's next is pointing to temp
//         Node *q=nullptr;
//         inserLast(q,first);
//        Node *r=first;
//        while(r!=nullptr){
//         cout<<r->data<<" ";
//         r=r->next;
//        }

//         return 0;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     char a;
//     int digit[4];
//     for(int i=0;i<4;i++){
//         cin>>a;
//         digit[i]=a-'0';

//     }
//     for(int i=0;i<4;i++){
//    if(digit[i]==7){
//     digit[i]=9;
//     break;
//    }
//     }
//     for(int i=0;i<4;i++){
//         cout<<digit[i];
//     }
//     return 0;}

// #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node *next;
// }*head=NULL;

// void create(int A[],int  n){
// Node *last,*temp;
// head=new Node;
// head->data=A[0];
// head->next=head;
// last=head;
// for (int i=1;i<n;i++){
//     temp=new Node;
//     temp->data=A[i];
//     temp->next=last->next;
//     last->next=temp;
//     last=temp;
// }
// }
// void display(Node *p){

//     do{
//         cout<<p->data<<" ";
//         p=p->next;
//     }while(p!=head);
//  }

//  void recursive(Node *p){
//     static int flag=0;
//     if(p!=head || flag==0){
//         flag=1;
//         cout<<p->data<<" ";
//       recursive(p->next);
//     }
//     flag=0;
//  }

// int main(){
//     int A[]={10,40,50,60,80};
//     int n=5;
//     create(A,n);
//     display(head);
//     cout<<endl;
//     recursive(head);
//     return 0;}

//     #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// } *head = NULL;

// void create(int A[], int n)
// {
//     Node *last, *temp;
//     head = new Node;
//     head->data = A[0];
//     head->next = head;
//     last = head;
//     for (int i = 1; i < n; i++)
//     {
//         temp = new Node;
//         temp->data = A[i];
//         temp->next = last->next;
//         last->next = temp;
//         last = temp;
//     }
// }
// void display(Node *p)
// {

//     do
//     {
//         cout << p->data << " ";
//         p = p->next;
//     } while (p != head);
// }
// int count(Node *p)
// {
//     int count = 0;
//     do
//     {
//         count++;
//         p = p->next;
//     } while (p != head);
//     return count;
// }

// int insert(Node *p, int index, int key)
// {
//     Node *q, *temp;
//     int x= count(p);
//     if (index < 0 || index >x){

//         return 0;
//     }
//     else
//     {
//         if (index == 0)
//         {

//             temp = new Node;
//             temp->data = key;
//             if (head == NULL)
//             {
//                 head = temp;
//                 temp->next = temp;
//             }
//             else
//             {
//                 temp->next = head;
//                 do
//                 {
//                     q = p;
//                     p = p->next;
//                 } while (p != head);
//                 q->next = temp;
//                 head = temp;
//             }
//         }
//         else if(index>0 && index<=x)
//         {
//             Node *q, *temp;
//             temp = new Node;
//             temp->data = key;

//             for (int i = 0; i < index ; i++)
//             {
//                 q = p;
//                 p = p->next;
//             }

//             temp->next = q->next;
//             q->next = temp;
//         }
//     }
// }
// void Atstart(Node *p, int key)
// {
//     Node *q, *temp;
//     temp = new Node;
//     temp->data = key;
//     if (head == NULL)
//     {
//         head = temp;
//         temp->next = temp;
//     }
//     else
//     {
//         temp->next = head;
//         do
//         {
//             q = p;
//             p = p->next;
//         } while (p != head);
//         q->next = temp;
//         head = temp;
//     }
// }
// int main()
// {
//     int A[] = {10,20,40,60,80};
//     int n = 5;
//     create(A, n);
//     display(head);
//    cout << endl;
//     insert(head, 4, 70);
//     display(head);
//     cout << endl;
//     // Atstart(head, 100);
//     // display(head);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node *next;
// }*head=NULL;

// void create(int A[],int  n){
// Node *last,*temp;
// head=new Node;
// head->data=A[0];
// head->next=head;
// last=head;
// for (int i=1;i<n;i++){
//     temp=new Node;
//     temp->data=A[i];
//     temp->next=last->next;
//     last->next=temp;
//     last=temp;
// }
// }
// void display(Node *p){

//     do{
//         cout<<p->data<<" ";
//         p=p->next;
//     }while(p!=head);
//  }
// int count(Node *p){
//     int c=0;
//     do{
//         c++;
//         p=p->next;
//     }while(p!=head);
//     return c;
// }

// int deleting(Node *p,int index){
//       Node *q,*temp;
//       int x=count(p);
//       if(index<0 || index >=x){
//         return 0;
//       }
//       else{
//         if(index==1){
//             do{
//                 q=p;
//                 p=p->next;
//             }while(p!=head);
//             if(q==head){
//                delete head;
//                head=NULL;
//             }
//             else
//             {
//                 q->next=head->next;
//                 delete head;
//                 head=q->next;
//             }
//         }
//             else if(index>=1 || index<=x){
//             for(int i=1;i<index;i++){
//                 q=p;
//                 p=p->next;
//             }
//             q->next=p->next;
//             delete p;
//             }

//       }

// }

// int main(){
//     int A[]={10,40,50,60,80};
//     int n=5;
//     create(A,n);
//     display(head);
//     cout<<endl;
//     deleting(head,1);
//     display(head);
//     return 0;}

//    #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node *prev;
//     Node *next;
// }*first=NULL;

// void create(int A[],int n){
//     Node *temp,*last;
//     first=new Node;
//     first->data=A[0];
//     first->prev=first->next=NULL;
//     last=first;
//     for(int i=1;i<n;i++){
//         temp=new Node;
//         temp->data=A[i];
//         temp->next=last->next;
//         temp->prev=last;
//         last->next=temp;
//         last=temp;
//     }
// }
// void display(Node *p){
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
// }
// int count(Node *p){
//     int c=0;
//     while(p!=nullptr){
//     c++;
//      p=p->next;
//     }
//     return c;
// }
// int main(){
//   int A[]={34,6,7,2,1};
//     int n=5;
//     create(A,n);
//     display(first);
//     cout<<endl;
//     cout<<"Length: "<<count(first);
//     return 0;}

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
// } *first = NULL;

// void create(int A[], int n)
// {
//     Node *temp, *last;
//     first = new Node;
//     first->data = A[0];
//     first->next = first->prev = NULL;
//     last = first;
//     for (int i = 1; i < n; i++)
//     {
//         temp = new Node;
//         temp->data = A[i];
//         temp->next = last->next;
//         temp->prev = last;
//         last->next = temp;
//         last = temp;
//     }
// }
// void display(Node *p)
// {
//     while (p != nullptr)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }
// int count(Node *p)
// {
//     int c = 0;
//     while (p != nullptr)
//     {
//         c++;
//         p = p->next;
//     }
//     return c;
// }
// int insert(Node *p, int index, int key)
// {
//     Node *t;
//      int i;

//     if (index < 0 || index > count(p))
//     {
//         return 0;
//     }
//     else
//     {
//         if (index = 0)
//         {
//             t = new Node;
//             t->data = key;
//             t->prev = NULL;
//             t->next = first;
//             first->prev = t;
//             first = t;
//         }
//         else
//         {
//             for ( i = 0; i < index - 1; i++)
//             {
//                 p = p->next;
//             }
//             t = new Node;
//             t->data = key;
//             t->prev = p;
//             t->next = p->next;
//             if(p->next!=NULL){
//                 p->next->prev=t;
//             }
//            p->next=t;

//         }
//     }
// }
// int main()
// {
//     int A[] = {4, 9, 2, 7, 5};
//     int n = 5;
//     create(A, n);
//     display(first);
//     insert(first, 4, 6);
//     cout << endl;
//     display(first);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// }*head=nullptr;
// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// Node *takeInput()
// {
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     Node *tail = NULL;

//     while (data != -1)
//     {

//         Node *newNode = new Node(data);
//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin >> data;
//     }

//     return head;
// }

// Node *reverse(Node *q,Node *p){
// if(p->next==nullptr){
//     return head;
// }
// else{
//     reverse(p,p->next);
//     p->next=q;

// }
// }

// int main()
// {
// Node*q=nullptr;
//     Node *head = takeInput();
//     print(head);
//     cout<<endl;
//      Node *t=reverse(q,head);
//      print(t);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;

//     Node(int data){
//         this->data=data;
//         next=nullptr;

//     }
// };

// void display(Node *p){
//     Node *temp=p;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }

// }

// Node * takeinput(){
//     int n,i=0,value;
//     cout<<"Enter the no of the input";
//     cin>> n;
//     Node *head=nullptr;
//     Node *temp=nullptr;
//     Node *last=nullptr;
//     while(i<n){
//         cin>>value;
//         temp=new Node(value);
//          temp->next=nullptr;
//         if(head==nullptr){
//             head=temp;
//             last=temp;
//         }
//         else{
//             // last=head;
//             // while(last->next!=nullptr){
//             //     last=last->next;
//             // }
//             last->next=temp;
//             last=temp;
          
//         }
//         i++;
//     }
// return head;
// }
// int main(){
//     Node *t;
//     t=takeinput();
//     display(t);
//     return 0;}



// #include <stdio.h>
// int main()
// {
//   int*p,*q;
//   int a=1001;
//   p=&a;
//   q=p;
//   *p=2002;
//   printf("%d",*q);
// return 0;
// }
