
#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1; // it is an index at which we have to push the elements
    }

    void push(int element)
    {
        if (size - top > 1)
        {                       // example : if size is 5 and the the top is at index 4 then 5-4=1 so the stack is full so we cant put more elements in it
            top++;              // top will increase (as its an index ) as we go on pushing elemnts
            arr[top] = element; // and this loop will keeep on pushing the elements at the top index place
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {          // there is only one condition to pop to not work that is if there are no elements then we cant pop any element so top index should always be more than -1
            top--; // as we keep on popping the elements the top index keeps on decreasing
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
   
};



      


int main()
{

    Stack st(5); // we've created a stack class obj st

    /*st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is Empty mere dost " << endl;
    }
    else
    {
        cout << "Stack is not Empty mere dost " << endl;
    }

    /*
    //creation of stack
    stack<int> s;   // syntax of stl library
    //push operation
    s.push(2);
    s.push(3);
    //pop
    s.pop();
    cout << "Printing top element " << s.top() << endl;
    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }
    cout << "size of stack is " << s.size() << endl;
    */

  

    return 0;
}