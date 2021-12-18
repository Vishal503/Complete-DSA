#include <bits/stdc++.h>
using namespace std;
int maxsumArray(int arr[],int n){
    int maxsum = 0;
    int currsum = 0;
    
    for(int i=0;i<n;i++){
        currsum = currsum + arr[i];
        if(currsum>maxsum){
            maxsum = currsum;
        }
        if(currsum<0){
            currsum = 0;
        }
    }
    return maxsum;
}
int main(){
    int n = 5;
    int arr[] = {5,4,-1,7,8};
    cout<<maxsumArray(arr,n);
    return 0;
}