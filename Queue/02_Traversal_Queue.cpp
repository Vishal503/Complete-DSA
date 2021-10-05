#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    while(!Q.empty()){
        cout<<Q.front()<<" "<<Q.back()<<endl;
        Q.pop();
    }
    return 0;
}