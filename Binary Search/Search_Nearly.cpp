#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int n , int start,int end,int x){
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==x)
            return mid;
        if(mid>start && arr[mid-1]==x)
            return mid-1;
        if(mid<end && arr[mid+1]==x)
            return mid+1;
        if(arr[mid]>x)
            return search(arr,n,start,mid-2,x);
        return search(arr,n,mid+2,end,x);
    }
    return -1;
}

int main(){
    int arr[] = {3, 2, 10, 4, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    cout<<search(arr,n,0,n-1,x);
    return 0;

}
