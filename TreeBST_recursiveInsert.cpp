#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;
}*root=nullptr;

Node * Rinsert(Node *p,int key){
    Node *t=nullptr;
    if(p==nullptr){
        t=new Node;
        t->data=key;
        t->lchild=t->rchild=nullptr;
        return t;
    }
    else{
    if(key>p->data){
        p->rchild=Rinsert(p->rchild,key);
    }
    else if(key<p->data)
    {
        p->lchild=Rinsert(p->lchild,key);
    }

    return p;
}
}
int search(Node *p,int key){
    while(p!=nullptr){
        if(p->data==key){
            cout<<key<<" found."<<endl;
            return 1;
        }
        else if(key>p->data){
            p=p->rchild;
        }
        else{
            p=p->rchild;
        }
    }
    return 0;
}
void inorder(Node *p){
    if(p!=nullptr){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

int main(){
    root=Rinsert(root,10);
    Rinsert(root,35);
    Rinsert(root,30);
    Rinsert(root,5);
    Rinsert(root,9);

    inorder(root);
    cout<<endl;
  // cout<< search(root,35);
    
    return 0;}