// pip- pre in post
//nlr lnr lrn 

#include<iostream>
#include<queue>
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
    cout<<"enter the data "<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left"<<data<<endl;
    root->left=buildTree(root->left); // after this recursive call only input is taken 
    /*as soon as we put -1 then it will ask for right node*/
    cout<<"enter the data for inserting in right"<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}
void levelordertraversal(node*root){  //this func is used to depict the actual binary tree
queue<node*>q;
q.push(root); // just push the total node in this queue
q.push(NULL); // we add the sepertor to seperste the the levels in the binary tree
while(!q.empty()){
    node*temp=q.front();
    
    q.pop();  // we got the binary tree 
    if(temp==NULL){ // PURANA TRAVERSAL HO CHUKA HAI
       cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<endl;
        if(temp->left){ // if temp->left is not null 
            q.push(temp->left);
        }
        if(temp->right){ //  if temp->right is not null
            q.push(temp->right);
        }
    }
}
//after retreating from the if else ladder it will go to above statement for popping outfrom the queue
}


int main(){
    node*root=NULL; // at start there is nothing
    //creating a tree
    root=buildTree(root);
    levelordertraversal(root);


return 0;



}