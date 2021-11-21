#include <bits/stdc++.h>
using namespace std;
int largest(string s){
    int n = s.length();
    if(n<2){
        return 0;
    }
    int len = 0;
    int i=0;
    while(i<n){
        if(s[i]==s[len]){
            len++;
            i++;
        }
        else{
            i = i-len+1;
            len=0;
        }
    }
}