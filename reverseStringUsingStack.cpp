#include<iostream>
#include<stack>
using namespace std;

// stack has the property to reverse the order of input given as it follows the LIFO last in first out order

int main(){
    stack <char> s;
    string str="Sunit";
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);

    }
    // now we have pushed the letters but we have to retrieve the letters in reverse order in some space 
    string ans=" ";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans<<""<<endl;
    return  0;
}