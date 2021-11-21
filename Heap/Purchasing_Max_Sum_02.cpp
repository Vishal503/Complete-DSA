//TC  = O(NlogN)
// SC = O(N)


#include <bits/stdc++.h>
using namespace std;
int maxe(int arr[],int n,int sum){
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
    int count = 0;
    while(q.top()<=sum){
        count++;
        sum  = sum-q.top();
        q.pop();
    }
    return count;
}
int main(){
    int arr[] = {2,0,65,6,4,13,2,12};
    int n = 8;
    int sum = 10;
    cout<<maxe(arr,n,sum);
    return 0;
}