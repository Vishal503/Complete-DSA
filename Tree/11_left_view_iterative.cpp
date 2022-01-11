#include <bits/stdc++.h>
using namespace std;
struct node {
    int key;
    node *left , *right;
    node(int k){
        key = k;
        left = right = NULL;
    }
};
void left(node *root)
{
    if(root==NULL)
        return;
    queue<node*> q;
    q.push(root);
    node *curr = NULL;
    while(!q.empty())
    {
        int size = q.size();
        int i = 0;
        while(i++<size)
        {
            curr = q.front();
            q.pop();
            if(i==1)
                cout<<curr->key <<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
}
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
    left(root);
    return 0;
}