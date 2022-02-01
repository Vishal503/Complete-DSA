#include <bits/stdc++.h>
using namespace std;
int find(int arr[],int n,int amount)
{
    sort(arr,arr+n,greater<int>());
    int res = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=amount){
            int c = floor(amount/arr[i]);
            res = res+c;
            amount = amount-c*arr[i];
        }
        if(amount==0)
            break;
    }
    return res;
}
int main(){
    int arr[] = {5,10,2,1};
    int n = 4;
    int v = 52;
    cout<<find(arr,n,v)<<" ";
    return 0;
}