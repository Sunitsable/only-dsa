// dll code
#include<iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node*prev;
    Node*next;
    
    
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
        
        
    }
};
void insertattail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}
void insertathead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertathead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertattail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(Node* &head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<endl;
    return len;
    
}
int main(){
    Node* node1=new Node(12);
    Node* head=node1;
    Node*tail=node1;
    print (head);
    getlength(head);
    
    
    insertathead(tail,head,22);
    print(head);
    
    insertattail(tail,head,20);
    print(head);
    
    insertathead(tail,head,15);
    print(head);

    insertAtPosition(tail,head,3,8);
        print(head);


        
    
    
    
    
    return 0;
}