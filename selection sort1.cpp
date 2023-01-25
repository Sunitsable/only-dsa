#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++) // for no. of passes
    {
        int minIndex=i;  //when we take the minimum of the given array at start that index is taken// initially we are considering the minindex as the first element and then it goes on increasing
        for(int j=i+1;j<n;j++) //as we have to search the minimum of the remaining array so not counting the bygone elements// for one pass we need to keep the minindex constant so that we can compare it with every other element other than minindex element hemce we did minindex=i
        {
            if(arr[minIndex]>arr[j]){  // here if any element j is lesser than the minindex then this loop will go on replacing that element
                swap(arr[minIndex],arr[j]);
            }

        }
        swap(arr[minIndex],arr[i]);//if we dont write this then also it is okay
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int a[4]={4,0,7,1};
    int n=4;
    selectionSort(a,4);
    printArray(a,4);
    return 0;
}