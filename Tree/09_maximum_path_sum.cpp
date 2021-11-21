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
int findmax(node *root,int &res){
    if(root==NULL)
        return 0;
    int lefts = findmax(root->left,res);
    int rights = findmax(root->right,res);
    int
}
int main(){
    node *root = new node(10);
    root->left = new node(12);
    root->right = new node(13);
    root->left->left = new node(15);
    return 0;
}