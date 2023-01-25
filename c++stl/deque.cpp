#include<iostream>
#include<deque>
using namespace std;
int main(){

// in deque deletion and insertion is possible at both ends
deque <int> d;
d.push_front(0);
d.push_back(1);
d.push_front(4);

for(int i:d){

    cout<<i<<" "<<endl;
}
d.erase(d.begin(),d.begin()+1);
for(int i:d){

    cout<<i<<" "<<endl;
}
return 0;
}
// there is also d.at() function is here 


