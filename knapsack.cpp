#include<bits/stdc++.h>
using namespace std;


struct item{
    int value,weight;
    item(int value,int weight){
        this->value=value;
        this->weight=weight;
        
    }
};

static bool cmp(struct item a ,struct item b){
    double r1=(double)a.value/(double)a.weight;
    double r2=(double)b.value/(double)b.weight;
    return r1>r2;
    
}

double fractionalKnapsack(int W,struct item a[],int n){
    double final=0.0;
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        if(a[i].weight<=W){
            W-=a[i].weight;
            final+=a[i].value;
        }
        else{
            final+=a[i].value*((double)W/(double)a[i].weight);
            break;
        }
    }
    return final;
}
int main(){
    int W=50;
    item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<fractionalKnapsack(W,arr,n)<<endl;
    return 0;
    
}