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
int get(node *root){
    if(root==NULL){
        return INT_MIN;
    }
    else    
        return max(root->key,max(get(root->left),get(root->right)));
}
int main(){
    node *root = new node(10);
    root->right = new node(2);
    root->left =  new node(12);
    root->right->right = new node(19);
    root->right->right->right = new node(20);
    cout<<get(root);
    return 0;
}