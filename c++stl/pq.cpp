#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int> pq; // maxheap // as when we print the elements of the priority_queue we get the greatest element at the top of the numbers
    priority_queue<int,vector<int>,greater<int>>mp; //minheap
    pq.push(5);
    pq.push(8);
    pq.push(9);
    int n=pq.size();
   /* for (int i=0;i<n;i++){
        cout<<pq.top()<<endl;
        pq.pop();
    }*/

    mp.push(5);
    mp.push(0);
    mp.push(1);
    int m=mp.size();
    for(int k=0;k<m;k++){
        cout<<mp.top()<<endl;
        mp.pop();
    }
    return 0;
}