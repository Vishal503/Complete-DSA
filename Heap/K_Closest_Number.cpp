#include <bits/stdc++.h>
using namespace std;
void minor(int arr[],int n,int k,int x){
    priority_queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        q.push({abs(arr[i]-x),i});
        if(q.size()>k){
            q.pop();
        }
    }
    while(!q.empty()){
        cout<<arr[q.top().second]<<" ";
        q.pop();
    }
}
int main(){
    int arr[] = {-10,-50,20,17,80};
    int x = 20;
    int k=2;
    int n = 5;
    minor(arr,n,k,x);
    return 0;
}