#include <bits/stdc++.h>
using namespace std;
int First(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x)
            {
                res = mid;
                end = mid-1;
            }
        if(arr[mid]<x)
            start = mid+1;
        if(arr[mid]>x)  
            end = mid-1;
    }
    return res;
}
int last(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x)
        {
            res = mid;
            start = mid+1;
        }
        if(arr[mid]<x)
            start = mid+1;
        else if(arr[mid]>x)  
            end = mid-1;
        
    }
    return res;
}

int main(){
    int arr[] = {2,4,7,7,9,20};
    int n = 6;
    int x = 7;
    cout<<First(arr,n,x)<<endl;
    cout<<last(arr,n,x);
    return 0;
}