#include <bits/stdc++.h>
using namespace std;
int maxsums(int nums[],int n){
    int maxsum=nums[0], sum=nums[0];
        for(int i=1; i<n; i++) {
            sum = max(nums[i], sum+nums[i]);
            if(sum>maxsum) {
                maxsum=sum;
            }
        }
        
        return maxsum; 
}
int main(){
    int n = 5;
    int arr[] = {5,4,-1,7,8};
    cout<<maxsums(arr,n);
    return 0;
}