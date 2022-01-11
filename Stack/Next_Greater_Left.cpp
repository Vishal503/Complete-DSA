#include <bits/stdc++.h>
using namespace std;
void st(int arr[],int n)
{
    stack<int> s;
    s.push(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty()==false &&s.top()>arr[i]){
            cout<<arr[i]<<" ";
            s.pop();
        }
        s.push(arr[i]);
     }
    while(s.empty()==false){
        cout<<-1<<" ";
            s.pop();
    }
}

int main(){
    int n = 4;
    int arr[] = {1,3,2,4};
    st(arr,n);
    return 0;
}