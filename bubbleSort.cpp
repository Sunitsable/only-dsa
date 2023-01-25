#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++) //these are jus the number of passes
    {
        for(int j=0;j<n-1;j++) //here actually 3 comparisions happen but as it starts from 0 we think that 0 to 2 only 2 comparisons no it is 0,1,2 indexes ,so 3 comparisons   
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int b[4]={4,0,7,1};
    int n=4;
    bubbleSort(b,4);
    printArray(b,4);
    return 0;
}