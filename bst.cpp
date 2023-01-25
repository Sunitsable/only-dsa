#include <iostream>
using namespace std;
class Node
{
    public:
    Node *lchild;
    Node *rchild;
    int data;
};
Node *root=NULL;
Node* insert(Node *p,int x)
{
    if(p==NULL)
    {
        Node *t = new Node;
        t->data=x;
        t->lchild=t->rchild=NULL;
        return t;
        
    }
    if(x<p->data)
    {
        p->lchild=insert(p->lchild,x);
    }
    else if(x>p->data)
    {
        p->rchild=insert(p->rchild,x);
    }
    return p;
}
void inorder(Node *p)
{
    if(p!=NULL)
    {
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
    }
    
}
void search(Node *p,int x)
{
    if(p->data==x)
    {
        cout<<p->data<<" ";
    }
    else if(x<p->data)
    {
        cout<<p->data<<" ";
        search(p->lchild,x);
    }
    else 
    {
        cout<<p->data<<" ";
        search(p->rchild,x);
    }
    
}
int Height(Node *p) {
    int x;
    int y;
    if (p == nullptr){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
 
Node* InPre(Node *p) {
    while (p && p->rchild != nullptr){
        p = p->rchild;
    }
    return p;
}
 
Node* InSucc(Node *p) {
    while (p && p->lchild != nullptr){
        p = p->lchild;
    }
    return p;
}
Node* Delete(Node *p, int key) {
    Node* q;
 
    if (p == nullptr){
        return nullptr;
    }
 
    if (p->lchild == nullptr && p->rchild == nullptr){
        if (p == root){
            root = nullptr;
        }
        delete p;
        return nullptr;
    }
  if (key < p->data){
        p->lchild = Delete(p->lchild, key);
    } else if (key > p->data){
        p->rchild = Delete(p->rchild, key);
    } else {
        if (Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        } else {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}
int main()
{ 
    cout<<"Original sort"<<endl;
      root=insert(root,40);
    insert(root,30);
    insert(root,10);
    insert(root,20);
    insert(root,50);
    inorder(root);
    cout<<endl;
    cout<<"Path of 10"<<endl;
    search(root,10);
    cout<<endl;
    cout<<"Delete 40"<<endl;
    Delete(root,40);
     inorder(root);
}
