#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            if(swapped==false)
                break;
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=4;
    int arr[] = {8,4,6,7};
    bubble(arr,n);
    print(arr,n);
    return 0;
}