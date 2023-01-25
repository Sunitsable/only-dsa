#include<iostream>
#include<set>
using namespace std;

int main(){
set<int>s;
s.insert(0);
s.insert(1);
s.insert(5);
s.insert(4);
s.insert(5);

for(auto i: s) {
  cout<<i<<endl;
}
cout<<s.count(5)<<endl; //count says if that element is there or not
s.erase(s.begin());

for(auto i: s) {
  cout<<i<<endl;
}
set<int>::iterator it=s.begin();  
it++;
s.erase(it);
for(auto i:s){
    cout<<i<<endl;
}
return 0;
}