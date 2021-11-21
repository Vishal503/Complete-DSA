#include <bits/stdc++.h>
using namespace std;
int count(int arr[],int n){
    int min = arr[0] , max;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
            max = i;
        }
    }
    return max;
}
int main(){
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<count(arr,n);
    return 0;
}