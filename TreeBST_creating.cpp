#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;   

}*root=nullptr;

void insert(int key){
   Node *t=nullptr;
   Node *r=nullptr,*p=nullptr;

   if(root==nullptr){
    root=new Node;
    root->data=key;
    root->lchild=root->rchild=nullptr;
   }
   else{
    t=root;
    while(t!=nullptr){
        r=t;//r is following t and will stop at point where t is null
        if(key>t->data){
            t=t->rchild;
        }
        else if(key<t->data){
            t=t->lchild;
        }
        else{

        }
    }
   p=new Node;
    p->data=key;
    p->lchild=p->rchild=nullptr;
    if(key>r->data){
        r->rchild=p;
    }
    else{
        r->lchild=p;
    }
    
   }

}

void inorder(Node *p){
    if(p!=nullptr){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);

    }
}

int main(){
    insert(9);
    insert(15);
    insert(5);
    insert(20);
    insert(8);
    inorder(root);
    
    return 0;}