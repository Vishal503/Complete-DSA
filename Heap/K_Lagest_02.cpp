#include <bits/stdc++.h>
using namespace std;
int lar(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        if(q.size()>k){
            q.pop();
        }
    }
    return q.top();
    
}
    

int main(){
    int arr[] = {4,9,2,1,0,7,8};  
    int n = 7;
    int k = 3;
    cout<<lar(arr,n,k);
    return 0;
}