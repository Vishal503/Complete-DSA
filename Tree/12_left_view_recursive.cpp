#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *left , *right;
    node(int k){
        key = k;
        left = right = NULL;
    }
};
void left(node *root,int level,unordered_map<int,int> &m)
{
    if(root==NULL)
        return;
    if(m.find(level)==m.end()){
        m[level] = root->key;
    }
    left(root->left,level+1,m);
    left(root->right,level+1,m);
}
void leftview(node *root)
{
    unordered_map<int ,int> m;
    left(root,1,m);
    for(int i=1;i<=m.size();i++){
        cout<<m[i]<<" ";
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
    leftview(root);
    return 0;
}