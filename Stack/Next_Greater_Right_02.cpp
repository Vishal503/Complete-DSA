#include <bits/stdc++.h>
using namespace std;
void st(int arr[],int n)
{
    stack<int> s;
    s.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty()==false &&s.top()<arr[i]){
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
    int arr[] = {11, 13, 21, 3};
    st(arr,n);
    return 0;
}