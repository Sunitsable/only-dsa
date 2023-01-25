#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid= start +(end-start/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        } 
        mid = start + (end-start)/2;

        
    }
    return mid;
}
int main(){
    int even[6]={2,3,4,5,6,0};
    int evenindex=binarysearch(even,6,4);
    cout<<"index of 4 is"<<evenindex<<endl;
    
    
}