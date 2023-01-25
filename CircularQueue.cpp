#include<iostream>
#include<queue>
using namespace std;

class Queue{
int *arr;
    int size;
    int qfront;
    int rear;

    public:

    Queue(){
        arr= new int[size];
        qfront=-1;
        rear=-1;
        size=100001;
    }
    void enqueue(int element){

        // 1st condn if queue is full then
        if((qfront==0 && rear==size-1)||(rear==qfront-1)){
            cout<<"Queue is full"<<endl;
        }
        // now the main conditions
        // pushing the first element
        else if(qfront==-1){   //think about the next thing u have to do that is put the element in the front=0 place
            qfront=rear=0;

        }
        else if(qfront!=0 && rear==size-1){
            rear=0;    // to behave in cyclic nature
                      // after that to put the element we have to put it in starting as it it is the property of circular queue
        }
        else{
            rear++;
        }
        arr[rear]=element;
    }

    void dequeue(){
        // empty queue case
        if(qfront==-1){
            cout<<"queue is empty"<<endl;
        }
        // if there is a single element to pop then
        if(qfront==rear){
            qfront=rear=-1;  // after popping single element we hv to do this
        }
        if(qfront==size-1){
            qfront=0;   // as we keep on popping every element then at last the front points to the o index position
        }
        else{
            qfront++;
        }
    
    }
    int front(){
        if(qfront==rear){          // means empty 
            return -1;
           }
           else{
           return arr[qfront];
           }

    }
};
int main(){
    Queue q;
    q.enqueue(22);
    q.enqueue(56);
    q.dequeue();
    cout<<q.front()<<endl;
}