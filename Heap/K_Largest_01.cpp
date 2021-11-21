//nlogk

#include <bits/stdc++.h>
using namespace std;
void lar(int arr[],int n,int k){
    sort(arr,arr+n,greater<int>());
    
    cout<<arr[k-1]<<" ";
   
}
int main(){
    int arr[] = {4,9,2,1,0,7,8};
    int n = 7;
    int k = 3;
    lar(arr,n,k);
    return 0;
}