#include <bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int start,int end,int x){
    if(end<start)
        return 0;
    int mid = start +(end-start)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[start]<=arr[mid]){
        if(x>=arr[start]&&x<=arr[mid])
            return count(arr,n,start,mid-1,x);
        return count(arr,n,mid+1,end,x);
    }
    if(x>=arr[mid] && x <=arr[end])
        return count(arr,n,mid+1,end,x);
    return count(arr,n,start,mid-1,x);
}
int main(){
    int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    cout<<count(arr,n,0,n-1,x);
    return 0;
}