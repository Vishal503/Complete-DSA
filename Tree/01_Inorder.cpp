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
void inorder(node *root){
    if(root !=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main(){
    node *root = new node(10);
    root->right = new node(2);
    root->left =  new node(12);
    root->right->right = new node(19);
    root->right->right->right = new node(20);
    inorder(root);
    return 0;
}