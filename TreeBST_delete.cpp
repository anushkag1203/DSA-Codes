#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *lchild;
    Node *rchild;

}*root=nullptr;

Node * Rinsert(Node *p,int x){
    Node *t=nullptr;
    if(p==nullptr){
        t=new Node;
        t->data=x;
        t->lchild=t->rchild=nullptr;

        return t;
    }
    else{
        if(x>p->data){
            p->rchild=Rinsert(p->rchild,x);
        }
        else if(x<p->data){
            p->lchild=Rinsert(p->lchild,x);
        }

        return p;
    }

}

void inorder(Node *p){
    if(p!=nullptr){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}


int Height(Node *p){
    int x,y;
    if(p!=nullptr){
        x=Height(p->lchild);
        y=Height(p->rchild);

        return x>y?x+1:y+1;
    }
    else{
        return 0;
    }
}

Node * InPre(Node *p){
    while(p!=nullptr && p->rchild!=nullptr){
        p=p->rchild;
    }

    return p;
}

Node * Insuc(Node *p){
    while(p!=nullptr && p->lchild){
        p=p->lchild;
    }
    return p;
}


Node *Delete(Node *p,int x){
if(p==nullptr){
    return nullptr;
}
if(p->lchild==nullptr && p->rchild==nullptr){//i.e if it is a leaf/terminal node
    if(p==root){  //if root then you cannot delete it you need to make it null
        root=nullptr;
    }
    else{
        free(p);//else directly delete it
    }
    return nullptr;
}
if(x>p->data){
    p->rchild=Delete(p->rchild,x);
}
 else if(x<p->data){
    p->lchild=Delete(p->lchild,x);
 }
 else{
    Node *q;
    if(Height(p->lchild)>Height(p->rchild)){
        q=InPre(p->lchild);

        p->data=q->data;
        p->lchild=Delete(p->lchild,q->data);
    }
   else if(Height(p->lchild)<Height(p->rchild)){
        q=Insuc(p->rchild);

        p->data=q->data;
        p->rchild=Delete(p->rchild,q->data);
    }


 }

}
int main(){

    root=Rinsert(root,10);
    Rinsert(root,20);
    Rinsert(root,5);
    Rinsert(root,34);
    Rinsert(root,8);
    Rinsert(root,40);
    

    inorder(root);
    cout<<endl;

    Delete(root,10);
    inorder(root);
    return 0;}