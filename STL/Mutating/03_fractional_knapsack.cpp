#include <bits/stdc++.h>
using namespace std;
int maxi(int cost[],int n,int k){
    int count=0;
    int sum =0;
    sort(cost,cost+n);
    for(int i=0;i<n;i++){
        if(sum+cost[i]<=k){
            sum = sum+cost[i];
            count++;
        }
    }
    return count;
}
int main(){
    int k=50;
    int cost[] = {1,12,5,111,200,1000,10,9,12,15};
    int n = sizeof(cost)/sizeof(cost[0]);
    cout<<maxi(cost,n,k);
    return 0;
}