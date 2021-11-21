#include <iostream>
using namespace std;
void heap(int arr[],int n,int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
     if (l < n && arr[l] > arr[largest])
        largest = l;
 
    
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heap(arr,n,largest);
    }

}
void deleter(int arr[],int& n){
    int last = arr[n-1];
    arr[0] = last;
    n=n-1;
    heap(arr,n,0);
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {10,5,1,0};
    int n=4;
    deleter(arr,n);
    print(arr,n);
    return 0;
}