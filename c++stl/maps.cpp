#include<iostream>
#include<map>
using namespace std;

int main(){

map <int,string> m;
m.insert({5,"sunit"});
m.insert({45,"sable"});
m[1]="gun";
m[6]="humre";



for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;/*i.first will give the value of the key
      and i.second will give the value of the value its like dictionary*/
}



    return 0;
}