#include <bits/stdc++.h>
using namespace std;
int binary(int arr[],int n,int x,int start,int end){
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return binary(arr,n,x,0,mid-1);
        else
            return binary(arr,n,x,mid+1,n-1);
    }
    return -1;
    
}
int main(){
    int arr[] = {2,4,5,6,7,8,9};
    int n= 7;
    int x = 8;
    cout<<binary(arr,n,x,0,n-1);
    return 0;
}