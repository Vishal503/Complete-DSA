#include <bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int start,int end){
    if(end<start)
        return 0;
    if(end==start)
        return end;
    int mid = start + (end-start)/2;
    if(arr[mid+1]<arr[mid])
        return mid+1;
    if(arr[mid]<arr[mid-1])
        return mid;
    if(arr[end]>arr[mid])
        return count(arr,n,start,mid-1);
    return count(arr,n,mid+1,end);        
}
int main(){
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<count(arr,n,0,n-1);
    return 0;
}