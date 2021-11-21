#include <bits/stdc++.h>
using namespace std;
void Que(int k,queue<int> q){
    if(q.empty()==true||k>q.size()||k<=0){
        return ;
    }
    stack <int> s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}

void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    

    int k=3;
    Que(k,q);
    print(q);

    return 0;
}