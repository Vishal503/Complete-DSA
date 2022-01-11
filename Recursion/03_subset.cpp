#include <bits/stdc++.h>
using namespace std;
void print(int *arr,int i,int n,int *subset,int j){
    if(i==n){
        int id = 0;
        while(id<j){
            cout<<subset[id]<<' ';
            id++;
        }
        cout<<endl;
        return;
    }
    print(arr,i+1,n,subset,j);
    subset[j] = arr[i];
    print(arr,i+1,n,subset,j+1);
}
int main()
{
    int arr[] = {1,2,3};
    int subset[100];
    int n=4;
    print(arr,0,n,subset,0);
    return 0;
}