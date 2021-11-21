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
    int n = 5;
    int arr[] = {13,7,6,12,13};
    nor(arr,n);
    return 0;
}