#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x,int start,int end){
    if(end<start)
        return -1;
    int mid = start + (end-start)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[mid]>x){
        return search(arr,n,x,start,mid-1);
    }
    return search(arr,n,x,mid+1,end);
}
int count(int arr[],int n,int x){
    int d = search(arr,n,x,0,n-1);
    if(d==-1)
        return 0;
    int count = 1;
    int left = d-1;
    while(left>=0&&arr[left]==x){
        count++,left--;
    }
    int right = d+1;
    while(right<n&&arr[right]==x){
        count++,right++;
    }
    return count;
}
int main(){
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    cout<<count(arr,n,x);
    return 0;
}
    
    
    