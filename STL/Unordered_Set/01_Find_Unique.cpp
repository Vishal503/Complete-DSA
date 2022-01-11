#include <bits/stdc++.h>
using namespace std;
void order(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(auto x = s.begin();x!=s.end();x++){
        cout<<*x<<" ";
    }
}

int main(){
    int arr[] =  {7, 2, 9, 4, 3, 2, 10, 4};
    int n = 7;
    order(arr,n);
    return 0;
}