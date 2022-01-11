#include <bits/stdc++.h>
using namespace std;
int partition(int arr[] ,int low,int high)
{
    int pivot = arr[low];
    int count =0;
    for(int i = low+1;i<=high;i++){
        if(arr[i]<=pivot)
            count++;
    }
    int pivotindex = low+count;
    swap(arr[pivotindex],arr[low]);
    int i = low , j = high;
    while(i<pivotindex &&j>pivotindex)
    {
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex &&j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quick(int arr[],int low,int high)
{
    if(low<high){
        int pivot = partition(arr,low,high);
        quick(arr,low,pivot-1);
        quick(arr,pivot+1,high);
    }
}
int main()
{
    int arr[] = {3,4,1,2};
    int n = 4;
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}