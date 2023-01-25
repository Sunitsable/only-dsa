#include<iostream>
#include<queue>
using namespace std;
queue<int> q1,q2;


struct stack{
    void push(int element){
        while(!q1.empty()){
            q2.enqueue(q1[front]);
            q1.dequeue();

        }
        q1.enqueue(element);
        while(!q2.empty()){
            q1.enqueue(q2[front]);
            q2.dequeue();
        }
    }
    int pop(){
        if(q1.empty()){
            cout<<"queue 1 is empty"<<endl;
        }
        else{
            int ans = q1.rear();
            q1.dequeue();
            return ans;
        }
    }

    
};
int main(){
    stack s;
    s.push(5);
    s.push(2);
    s.push(6);
    cout<<s.pop()<<endl;
}