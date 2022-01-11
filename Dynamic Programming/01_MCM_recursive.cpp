#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int i,int j)
{
    int mn = INT_MAX;
    if(i>=j)
        return 0;
    for(int k=i;k<j;k++)
    {
        int temp = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        if(temp<mn)
    {
        mn = temp;
    }
    }
    
    return mn;
}
int main()
{
    int arr[] = {10,30,5,60};
    int n = 4;
    cout<<solve(arr,0,n-1);
    return 0;
}