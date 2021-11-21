#include <bits/stdc++.h>
using namespace std;
char search(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    char res  = ' ';
    while(start<=end){
        int mid  = start +(end-start)/2;
        if(arr[mid]==x){
            start = mid+1;
        }
        else if(x<arr[mid]){
            res = arr[mid];
            end  = mid -1;
        }
        else    
            start = mid +1;
    }
    return res;
}
int main(){
    char arr[] = {'a','b','c','d','g'};
    char n = 5;
    char x = 'd';
    cout<<search(arr,n,x);
    
    return 0;
}