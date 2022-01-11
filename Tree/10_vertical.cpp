#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key =k;
        left = right = NULL;
    }
};
void vertical(Node *root,int get,map<int,vector<int>> &m){
    if(root==NULL)
        return;
    m[get].push_back(root->key);
    vertical(root->left,get-1,m);
    vertical(root->right,get+1,m);
}
void print(Node *root){
    map<int ,vector<int>> m;
    int h=0;
    vertical(root,h,m);
    map<int,vector<int>> :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
    }
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->right->right = new Node(9);
    print(root);
    return 0;
}