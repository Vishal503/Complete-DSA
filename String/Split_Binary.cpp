//Split the binary string into substrings with equal number of 0s and 1s



#include <bits/stdc++.h>
using namespace std;
int max(string s , int n){
    int count0 = 0;
    int count1 = 0;
    int target =0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            count0++;
        else{
            count1++;
        }
        if(count0==count1){
            target++;
        }
    }
    if(target==0)
        return -1;
    else
        return target;
}
int main(){
    string s = "0010100111";
    int n = s.length();
    cout<<max(s,n);
    return 0;
}
