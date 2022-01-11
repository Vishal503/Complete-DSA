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
void right(node* root, int level, int &last_level)
{
    if (root == nullptr) {
        return;
    }
    if (last_level < level)
    {
        cout << root->key << " ";
        last_level = level;
    }
    right(root->right, level + 1, last_level);
    right(root->left, level + 1, last_level);
 
}
void rightview(node *root)
{
    int last_level =0;
    right(root,1,last_level);
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
    rightview(root);
    return 0;
}