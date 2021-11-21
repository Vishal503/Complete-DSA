#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x){
    int start = 0 ;
    int end = n-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x)
            return mid;
        else if(x<arr[mid])
            end = mid -1;
        else    
            res = arr[mid];
            start = mid+1;
    }
    return  res;
}
int main(){
    int arr[] = { 1, 2, 4, 6, 10, 12, 14};
    int n = 5;
    int x = 7;
    cout<<search(arr,n,x);
    return 0;
}