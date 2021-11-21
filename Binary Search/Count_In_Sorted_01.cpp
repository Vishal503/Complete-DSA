#include <bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int x){
    int count = 0;
    for(int i=0;i<n;i++){
        if(x==arr[i])
            count++;
    }
    return count;
}
int main(){
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;
    cout<<count(arr,n,x);
    return 0;
}