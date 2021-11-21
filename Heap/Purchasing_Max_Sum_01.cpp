//TC = O(NlogN)
//SC  = O(N)
#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int n,int sume){
    int count=0;
    int sum = 0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=sume){
            sum = sum+arr[i];
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {2,0,65,6,4,13,2,12};
    int n = 8;
    int sume = 10;
    cout<<sum(arr,n,sume);
    return 0;
}