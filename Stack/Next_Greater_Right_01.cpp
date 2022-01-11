#include <bits/stdc++.h>
using namespace std;
void nor(int arr[],int n){
    for(int i=0;i<n;i++){
        int next = -1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                next = arr[j];
                break;
            }

        }
        cout<<next<<" ";
    }
    
}
int main(){
    int n = 4;
    int arr[] = {11, 13, 21, 3};
    nor(arr,n);
    return 0;
}