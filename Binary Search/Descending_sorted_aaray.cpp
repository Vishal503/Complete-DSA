#include <bits/stdc++.h>
using namespace std;
int binary(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            end = mid-1;
        if(arr[mid]>x)  
            start = mid+1;
    }
    return -1;
}

int main(){
    int arr[] = {20,15,10,9,5,3};
    int n = 6;
    int x = 9;
    cout<<binary(arr,n,x);
    return 0;
}