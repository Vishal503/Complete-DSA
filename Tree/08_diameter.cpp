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
int height(node *root , int &vas){
    if(root==NULL)
        return 0;
    int lefts = height(root->left,vas);
    int rights = height(root->right,vas);
    vas  = max(vas,1+lefts+rights);
    return 1+max(lefts,rights);
}
int diameter(node *root){
    if(root==NULL)
        return 0;
    int vas = INT_MIN;
    height(root,vas);
    return vas;
}
int main(){
    node *root = new node(10);
    root->left = new node(12);
    root->right = new node(13);
    root->left->left = new node(15);
    root->left->right = new node(5);
    cout<<diameter(root);
    return 0;
}