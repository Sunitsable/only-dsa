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
        qfront=0;
        rear=0;
        size=100001;
    }

    void enqueue(int element){   //always in queue the element is pushed at the end
        if(rear==size){
            cout<<"queue overflows"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;                 // rear will point to the place next to the last element
        }
    }
    void dequeue(){
        if(qfront==rear){                 //this condition is for empty queue
            cout<<"queue underflows"<<endl;

        }
        else{
             arr[qfront]=-1;          // -1 is just a random value for not keeping the space of the array empty
             qfront++;

             if(qfront==rear){
                qfront=0;                  //worst case
                rear=0;
             }
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

    bool isEmpty(){
        if(qfront==rear){
            return true;

        }
        else{
            return false;
        }
    }
};

int main(){
  Queue q;
  q.enqueue(22);          // push is enqueue  here
                          // pop is dequeue here 
                          // also here FIFO order works imagine a queue
  q.enqueue(56);
  q.enqueue(96);

  q.dequeue();
  q.dequeue();
  q.dequeue();
  cout<<q.front()<<endl;


  

    return 0;
}