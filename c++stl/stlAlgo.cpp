#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector <int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);

    cout<<binary_search(v.begin(),v.end(),3)<<endl;   // it will give u the value as the 0 or 1 as 0 means that the number is not present and 1 means the value is present
    cout<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    string abc="abc";
    reverse(abc.begin(),abc.end());
    cout<<"string->"<<abc<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    for(int i:v){
        cout<<i<<endl;
    }

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<endl;
    }
    

return 0;
}