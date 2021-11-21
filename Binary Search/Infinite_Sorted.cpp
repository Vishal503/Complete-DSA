#include <bits/stdc++.h>
using namespace std;
int binary(int arr[],int start,int end,int x){
     while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            return binary(arr,mid+1,end,x);
        if(arr[mid]>x)  
            return binary(arr,start,mid-1,x);
    }
    return -1;
}
int pos(int arr[],int x){
    int start = 0;
    int end = 1;
    while(arr[end]<x){
        start = end;
        end = 2*end;
    }
    return binary(arr,start,end,x);
}
int main(){
    int arr[] = {1, 2, 4, 6, 8, 9, 12, 14, 17, 21, 45};
    int n = 11;
    int x = 9;
    cout<<pos(arr,9);
    return 0;
}