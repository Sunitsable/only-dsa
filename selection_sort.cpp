//selection sort in array
#include<iostream>
using namespace std;
int selectionsort(int arr[],size){
    int size,arr[size],n;
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);  
        return arr[];       //5 2 3 7
    }
 
}
int main(){
    int ar[6]={4,5,3,2,9,1};
    cout<<"the sorted array"<<endl;
    int selectionsort(ar,6);
    return 0;

}