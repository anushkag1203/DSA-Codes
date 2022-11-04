#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int height;
    Node *lchild;
    Node *rchild;
} *root = nullptr;

int NodeHeight(Node *p)
{
    int hl, hr;
    // if(p!=nullptr && p->lchild!=nullptr ){
    //     hl=p->lchild->height;
    // }
    // else{
    //     hl=0;
    // }
    // if(p!=nullptr && p->rchild!=nullptr ){
    //     hr=p->rchild->height;
    // }
    // else{
    //     hr=0;
    // }

    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
}

int BalanceFactor(Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl - hr;
}

Node *LLRotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    if (root == p)
    {
        root = pl;
    }

    return pl;
}
Node *LRRotation(Node *p)
{

    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    Node *plrr = plr->rchild;
    Node *plrl = plr->lchild;

    plr->lchild = pl;
    plr->rchild = p;
    p->lchild = plrr;
    pl->rchild = plrl;

    if (root == p)
    {
        root = plr;
    }
    return plr;
}
Node *RLRotation(Node *p)
{

    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    Node *prlr = prl->rchild;
    Node *prll = prl->lchild;

    prl->lchild = p;
    prl->rchild = pr;

    p->rchild = prll;
    pr->lchild = prlr;

    if (root == p)
    {
        root = prl;
    }

    return prl;
}
Node *RRRotation(Node *p)
{

    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;

    if (root == p)
    {
        root = pr;
    }
    return pr;
}
Node *Rinsert(Node *p, int x)
{
    Node *t;
    if (p == nullptr)
    {
        t = new Node;
        t->data = x;
        t->height = 1; // as it is a new node and there is no node attach to it.
        t->lchild = t->rchild = nullptr;

        return t;
    }

    if (x > p->data)
    {
        p->rchild = Rinsert(p->rchild, x);
    }
    else if (x < p->data)
    {
        p->lchild = Rinsert(p->lchild, x);
    }

    p->height = NodeHeight(p);

    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
    {
       return LLRotation(p);
    }
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
    {
       return LRRotation(p);
    }
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
    {
       return RRRotation(p);
    }
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
    {
       return  RLRotation(p);
    }

    return p;
}

void preorder(Node *p)
{
    if (p != nullptr)
    {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int main()
{
    root = Rinsert(root, 50);
    Rinsert(root, 60);
    Rinsert(root, 70);
 
    preorder(root);
    return 0;
}