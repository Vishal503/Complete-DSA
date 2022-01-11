#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    Node *head;
    Node(int x){
        data = x;
        next = NULL;
        head = NULL;
    }
};
void reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL , *next = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void print(Node *head)
{
    struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    reverse(head);
    print(head);
    return 0;
}
