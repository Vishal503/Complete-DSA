#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* head;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void print(Node *head)
{
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    print(head->next);
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    print(head);
    return 0;
}