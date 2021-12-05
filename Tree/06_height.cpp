#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node* left;
    node* right;
    node(int k){
        key =k;
        left = right = NULL;
    }
};
int height(node *root){
    if(root==NULL){
        return 0;
    }
    else    
        return max(height(root->left),height(root->right))+1;
}
int main(){
    node *root = new node(10);
    root->right = new node(112);
    root->left =  new node(12);
    root->right->right = new node(19);
    root->right->right->right = new node(20);
    root->right->left->right = new node(90);
    cout<<height(root);
    return 0;
}