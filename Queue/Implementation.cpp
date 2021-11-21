#include <bits/stdc++.h>
using namespace std;
#define size 10
int A[size];
int front = -1;
int rear = -1;
bool isempty(){
    if(front == -1 && rear ==-1)
        return true;
    else 
        return false;
}
void enqueue(int x){
    if(rear = size-1){
        cout<<"full"<<endl;
    }
    else{
        rear++;
        A[rear] = x;
    }
}
void dequeue(){
    if(isempty()){
        cout<<"empty"<<endl;
    }
    else{
        front++;
        x 
    }
}
