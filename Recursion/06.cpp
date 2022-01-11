//Print N-bit binary numbers having more 1’s than 0’s in all prefixes

#include <bits/stdc++.h>
using namespace std;
void print(string str,int ex , int rem)
{
    if(rem==0){
        cout<<str<<" ";
        return;
    }
    print(str+"1",ex+1,rem-1);
    if(ex>0){
        print(str+"0",ex-1,rem-1);
    }
}
void num(int n){
    string str = " ";
    print(str,0,n);
}
int main(){
    int n =4;
    num(n);
    return 0;
}