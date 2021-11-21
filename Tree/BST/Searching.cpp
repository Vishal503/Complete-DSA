#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key = k;
        left = right = NULL;
    }
};
bool search(node *root,int k){
    if(root==NULL)
        return false;
    else if(root->key==k)
        return true;
    if(root->key<k){
        return search(root->right,k);
    }
    else if{
        return search(root->left,k);}
    
}
int main(){
    node *root = new node(10);
    root->left = new node(12);
    root->right = new node(13);
    root->left->left = new node(15);
    search(root,1);
    return 0;
}