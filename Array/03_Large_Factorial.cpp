#include <bits/stdc++.h>
using namespace std;
vector<int> factorial(int N){
        
        vector<int> res;
        res.push_back(1);
        for(int x = 2;x<=N;x++){
            int carry = 0;
            for(int i=0;i<res.size();i++){
                int value = res[i]*x + carry;
                res[i] = value%10;
                carry = value/10;
            }
            while(carry!=0){
                res.push_back(carry%10);
                carry = carry/10;
            }
            
        }
        reverse(res.begin(),res.end());
        return res;
}
int main()
{
    int N;
    cin>>N;
    vector<int> ans = factorial(N);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
    return 0;
}