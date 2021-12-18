#include <bits/stdc++.h>
using namespace std;
void maxsums(int arr[],int n){
    int maxsum = 0;
    int curr = -1;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count>maxsum){
            maxsum = count;
            curr = i;
        }
    }
    if(maxsum>n/2){
        cout<<arr[curr]<<endl;
    }
    else{
        cout<<"No";
    }
}
int main()
{
    int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    maxsums(arr, n);
 
    return 0;
}