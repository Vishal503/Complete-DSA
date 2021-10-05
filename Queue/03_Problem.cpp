// Given a number n, print first n numbers in increasing order such that all these numbers have digits in set {5, 6}.
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    queue<string> Q;
    Q.push("5");
    Q.push("6");
    for(int i=0;i<n;i++){
        string cur = Q.front();
        cout<<cur<<" ";
        Q.pop();
        Q.push(cur +"5");
        Q.push(cur +"6");
    }
}
int main(){
    int n=10;
    print(n);
    return 0;
}