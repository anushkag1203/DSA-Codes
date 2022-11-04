#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;
}*root=nullptr;
class Queue{
    public:
    int rear;
    int front;
    int size;
    Node* *A;
}q;
void create(Queue* q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->A=new Node*[size];
}

int isEmpty(Queue q){
    if(q.front==q.rear){
      return 1;
    }
    return 0;
}

int isFull(Queue q){
    if(q.rear==q.size-1){
        return 1;
    }
    return 0;
}

void enqueue(Queue *q,Node *value){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue Full";
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->A[q->rear]=value;
    }
}

Node *dequeue(Queue *q){
    Node *x;
    if(q->front==q->rear){
        cout<<"Queue Empty";
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->A[q->front];

    }
    return x;
}

void precreate(){
    Node *p,*rNode,*lNode;
    int x;
    //Queue q;
    create(&q,10);
    cout<<"Enter the root data :";
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=root->rchild=nullptr;
    enqueue(&q,root);
    while(isEmpty(q)==0){
        p=dequeue(&q);
        cout<<"Enter the left data :";
        cin>>x;
        if(x!=-1){
            lNode=new Node;
            lNode->data=x;
            lNode->lchild=lNode->rchild=nullptr;
            p->lchild=lNode;
            enqueue(&q,lNode);

        }
        cout<<"Enter the right data :";
        cin>>x;
        if(x!=-1){
            rNode=new Node;
            rNode->data=x;
            rNode->lchild=rNode->rchild=nullptr;
            p->rchild=rNode;
            enqueue(&q,rNode);
        }

   }

}
void preorder(Node *p){
    if(p!=nullptr){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Inorder(Node *p){
    if(p!=nullptr){
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}
void postOrder(Node *p){
    if(p!=nullptr){
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout<<p->data<<" ";

    }
}

void level(Node *root){
    cout<<root->data<<" ";
    enqueue(&q,root);

    Node *p=nullptr;
    while(isEmpty(q)==0){
        p=dequeue(&q);
        if(p->lchild!=nullptr){
            cout<<p->lchild->data<<" ";
            enqueue(&q,p->lchild);
        }
        if(p->rchild!=nullptr){
            cout<<p->rchild->data<<" ";
            enqueue(&q,p->rchild);
        }
    }
}
int main(){
    precreate();
    cout<<"preorder: ";
    preorder(root);
cout<<endl;
    cout<<"Inorder: ";
    Inorder(root);
cout<<endl;
    cout<<"Postorder: ";
    postOrder(root);
 cout<<endl;
    cout<<"Level: ";
    level(root);

    return 0;}







