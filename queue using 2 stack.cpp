//implementing queue using 2 stacks
#include&lt;iostream&gt;
#include&lt;stack&gt;
using namespace std;
struct Queue{
stack&lt;int&gt; s1,s2;
void enqueue(int element){
while(!s1.empty()){
s2.push(s1.top());
s1.pop();
}
s1.push(element);
while(!s2.empty()){
s1.push(s2.top());
s2.pop();
}
}
int dequeue(){
if(s1.empty()){
cout&lt;&lt;&quot; Q is empty&quot;&lt;&lt;endl;
exit(0);
}
int element=s1.top();
s1.pop();
return element;
}
int front(){
return s1.top();
}
int rear(){
while(!s1.empty()){
s2.push(s1.top());
s1.pop();
}
return s2.top();
}
};
int main(){
Queue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
cout&lt;&lt;q.dequeue()&lt;&lt;endl;
cout&lt;&lt;q.rear()&lt;&lt;endl;

return 0;
}