// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int data;
// Node *next;
// };
// int max(Node *p){
//    int max=INT32_MIN;
//     while(p!=nullptr){
//         if(p->data>max){
//             max=p->data;
//         }
//         p=p->next;
//     }
//     return max;
// }
// int min(Node *p){
//     int min=INT32_MAX;
//     while(p!=nullptr){
//         if(p->data<min){
//             min=p->data;
//         }
//         p=p->next;
//     }
//     return min;
// }
// int main(){
//     int A[]={34,9,12,56,2,34,76};
//     int n=7;
//     Node*first,*temp,*last;
//     first=new Node;
//     first->data=A[0];
//     first->next=nullptr;
//     last=first;
// // Create a Linked List
//     for(int i=1;i<n;i++){
//          temp=new Node;
//       temp->data=A[i];
//       temp->next=nullptr;
//  // last's next is pointing to temp
//       last->next=temp;
//       last=temp;
//     }
// cout<<"Maximum:"<<max(first)<<endl;
// cout<<"MINIMUM:"<<min(first);
//     return 0;}

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// int max(Node *p)
// {
//     int x = 0;
//     if (p == 0)
//     {
//         return INT32_MIN;
//     }
//     else
//     {
//         x = max(p->next);
//         if (x < p->data)
//         {
          
//         }
//         else{

//         }
//     }

   

//     int main()
//     {
//         int A[] = {34, 9, 12, 56, 2, 34, 76};
//         int n = 7;
//         Node *first, *temp, *last;
//         first = new Node;
//         first->data = A[0];
//         first->next = nullptr;
//         last = first;
//         // Create a Linked List
//         for (int i = 1; i < n; i++)
//         {
//             temp = new Node;
//             temp->data = A[i];
//             temp->next = nullptr;
//             // last's next is pointing to temp
//             last->next = temp;
//             last = temp;
//         }
//         cout << "Maximum:" << max(first) << endl;
//         cout << "MINIMUM:" << min(first);
//         return 0;
//     }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int data;
// Node *next;
// };
// int RMax(Node *p){
//      int x=0;
//     if(p==0){
//         return INT32_MIN;
//     }
//     else{
//         x=RMax(p->next);
//       if(x>p->data){
//         return x;
//       }
//       else{
//         return p->data;
//       }
//     }
// }
// int max(Node *p){
//     int x=0;
//     if (p==0)
//         return INT32_MIN;
//     x=max(p->next);

//     return x>p->data?x:p->data;
// }
// int RMin(Node*p){
//     int x;
//     if(p==0)
//       return INT32_MAX;
//     x=RMin(p->next);
//     return x<p->data?x:p->data;
// }
// int main(){
//     int A[]={78,34,90,23,11};
//     int n=5;
//     Node*first,*temp,*last;
//     first=new Node;
//     first->data=A[0];
//     first->next=nullptr;
//     last=first;
// // Create a Linked List
//     for(int i=1;i<n;i++){
//          temp=new Node;
//       temp->data=A[i];
//       temp->next=nullptr;
//  // last's next is pointing to temp
//       last->next=temp;
//       last=temp;
//     }
// cout<<"MAXIMUM:"<<RMax(first)<<endl;
// cout<<"MINIMUM:"<<RMin(first)<<endl;
//     return 0;}

#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
};
int main(){
    int A[]={4,8,2,7,1};
    int n=5;
    Node*first,*temp,*last;
    first=new Node;
    first->data=A[0];
    
    first->next=nullptr;
    last=first;
// Create a Linked List
    for(int i=1;i<n;i++){
         temp=new Node;
      temp->data=A[i];
      temp->next=nullptr;
 // last's next is pointing to temp
      last->next=temp;
      last=temp;
    }
// Display Linked List
    Node* p=first;
    int max=first->data;
    while(p!=nullptr){
        if(max<p->data){
          max=p->data;
           //p=p->next;

        }
        
         p=p->next;
        
    }
 cout<<max;
    return 0;}


