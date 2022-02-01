#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={1,4,6,7,2};
    int n = 5;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}