#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size()-1;
    int mid = 0;
    while(start<end)
    {
        mid = start  + (end-start)/2;
        if(nums[mid]<target)    start = mid+1;
        else   end = mid;
    }
    return start;
}
int main(){
    vector<int> nums = {1,2,3,4,6,6,8,11};
    int n = 8;
    int target = 6;
    cout<<lower_bound(nums,target);
    return 0;
}