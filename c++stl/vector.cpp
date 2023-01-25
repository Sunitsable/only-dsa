#include<iostream>
#include<vector>
using namespace std;
int main(){

vector <int> v;                 //as u can see only to two operations are possible here  push_back( ) and pop_back()

/*v.push_back(1);
v.push_back(2);
/*for(int i:v){
    cout<<i<<" "<<endl;
}*/

/*v.pop_back();
for(int i:v){
    cout<<i<<" "<<endl;
}
v.push_back(36);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

return 0;
*/
vector <int> a(5,1);
vector <int> last(a);
a.pop_back();
for(int i:a){
    cout<<i<<" ";

}

}