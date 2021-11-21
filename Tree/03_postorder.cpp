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
void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    node *root = new node(10);
    root->right = new node(2);
    root->left =  new node(12);
    root->right->right = new node(19);
    root->right->right->right = new node(20);
    postorder(root);
    return 0;
}