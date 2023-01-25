#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node*root){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;

    }
    cout<<"insert data on left"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"insert data on right"<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}
int main(){
    node*root=NULL;
    //creating a tree
    root=buildTree(root);
    return 0;
}