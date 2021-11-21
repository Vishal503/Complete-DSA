#include <bits/stdc++.h>
using namespace std;
int minor(int arr[],int n,int k){
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        if(q.size()>k){
            q.pop();
        }
    }
    
    return q.top();
}

int main(){
    int arr[]= {3,7,5,9,8};
    int n = 5;
    int k = 2;
    cout<<minor(arr,n,k);
    
    return 0;
}
    