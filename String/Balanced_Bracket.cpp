#include <bits/stdc++.h>
using namespace std;
int count(string s){
    int n = s.length();
    if(n%2){
        return -1;
    }
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='}'&&!s.empty()){
            if(s.top()=='{'){
                s.pop();
            }
            else{
                s.push(s[i]);
            }

        }
        else{
            s.push(s[i]);
        }
    }
    int red = s.size();
    int l=0;
    while(!s.empty()&&s.top()=='{'){
        s.pop();
        l++;
    }
}