#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

Node(int data){

    this->data=data;
    this->next=next;
}
};
void InsertatTail(Node* &tail,int d){
    //creating a new node
    Node* temp=new Node(d);
    // at start our single node will be the tail so first point its next to temp and then point the tail to temp hence we get a node at tail
    tail->next=temp;
    tail=temp;
}
void Insertathead(Node* &head,int d){
    //created a new node named temp
    Node*temp=new Node(d);
    //pointed the next part of node to head
    temp->next=head;
    //changing the arrow of head to the temp pointer
    head=temp;
}
void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        Insertathead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;
//  traversing the linked list
    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        InsertatTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print(Node* &head){
    //pointing the newly made temp node to head as we want to insert node a t head
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        //we printed the data now we have to forward the next part of the node to other node
        temp=temp->next;

    }
    cout<<endl;
}
void deletenode(int position,Node*head,Node*tail,int d){

    if(position==1){
        
    }
}

int main(){
    //created a new node
    Node* node1=new Node(10);
    /*cout<<node1->data<<endl;
    cout<<node1->next<<endl;*/
    //defining the meaning of head that (in my logic) that our new head pointer is pointing to node1
    Node*head=node1;
    Node*tail=node1;
    print(head);
    InsertatTail(head,12);
    print(head);
    InsertatTail(head,15);
    print(head);
    insertAtPosition(tail,head,3,22);
    print(head);
    
    return 0;
}